#include <WiFi.h>
#include <PubSubClient.h>
#include "Display.h"
#include "Sonar.h"
#include "Semaphor.h"
#include "Button.h"

// Hardware
Semaphor semaphor(32, 12, 14);
Sonar sonar(26, 25);
Button btnReset(33);
Button btnBacklight(18);
Display display(0x27);
#define I2C_SDA 21
#define I2C_SCL 22


/****************************************
 * Include Libraries
 ****************************************/
#include "UbidotsEsp32Mqtt.h"

/****************************************
 * Define Constants
 ****************************************/
const char *UBIDOTS_TOKEN = "BBUS-mFa6CabhdVkJ64mTuFUY3mhgnvRVXV";  // Put here your Ubidots TOKEN
const char *WIFI_SSID = "Inteli-COLLEGE";      // Put here your Wi-Fi SSID
const char *WIFI_PASS = "QazWsx@123";      // Put here your Wi-Fi password
const char *DEVICE_LABEL = "Esp32";   // Put here your Device label to which data  will be published
const char *VARIABLE_LABEL = "Rastreio";
const char *DISTANCE = "6570b0689f68525dea68630c";
int value_A = 0; // Put here your Variable label to which data  will be published


/****************************************
 * Ubidots Setup
 ****************************************/
const int PUBLISH_FREQUENCY = 5000; // Update rate in milliseconds
unsigned long timer;
uint8_t analogPin = 34; // Pin used to read data from GPIO34 ADC_CH6.

Ubidots ubidots(UBIDOTS_TOKEN);

/****************************************
 * Auxiliar Functions
 ****************************************/
void callback(char *topic, byte *payload, unsigned int length)
{
  Serial.print("Message arrived [");
  Serial.print(topic);
  Serial.print("] ");
  for (int i = 0; i < length; i++)
  {
    Serial.print((char)payload[i]);
  }
  Serial.println();
}

/****************************************
 * Main Functions
 ****************************************/
void setup()
{
  Serial.begin(115200);
  // ubidots.setDebug(true);  // Uncomment this to make debug messages available
  ubidots.connectToWifi(WIFI_SSID, WIFI_PASS);
  ubidots.setCallback(callback);
  ubidots.setup();
  ubidots.reconnect();

  timer = millis();
  display.setup();
}

void loop()
{
  if (!ubidots.connected())
  {
    ubidots.reconnect();
  }
  if ((millis() - timer) > PUBLISH_FREQUENCY)
  {
    float value = analogRead(analogPin);
    ubidots.add(VARIABLE_LABEL, value_A);
    ubidots.publish(DEVICE_LABEL);
    timer = millis();
  }
  ubidots.loop();
  checkTamper();
  checkThresholdReset();
  checkBacklight();
}

/****************************************
 * Services
 ****************************************/
void checkBacklight() {
/*
 * Liga a Backlight da LCD se o botão da backlight for apertado
 */
  if (btnBacklight.pressed()) {
    display.blinkBacklight();
  }
}

void checkTamper() {
/*
 * Mostra a tela inicial na LCD
 */
    if (sonar.tampered()) {
      Serial.println("TAMPERED!");
      semaphor.error();
      display.write("Alerta!", "Tamper Acionado");
      value_A = 1;
    }

    else if (!sonar.getPreviouslyTampered()) {
      semaphor.ok();
      display.home();
      value_A = 0;
    }
}

void checkThresholdReset() {
/*
 * Reseta o Threshold se o botão de reset for pressionado
 */
  if (btnReset.pressed()) {
    sonar.setTresholdDistance();
    Serial.println("RESET!");
    semaphor.alert();

    display.write("Distancia", "Resetada!");
    delay(5000);
    display.home();
  }
}

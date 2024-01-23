class Led {
  /*
   * Esta classe representa uma LED, abstraindo alguns comportamentos
   * e estado.
   */

private:
  bool status;
  int pin;

public:
  Led(int _pin) {
    pin = _pin;
    pinMode(pin, OUTPUT);
  }

  bool getStatus() {
  /*
   * Retorna o status da LED.
   * @return true se ligada, false se desligada
   */
    return status;
  }

  void turnOn() {
  /*
  * Liga a LED
  */
    digitalWrite(pin, HIGH);
    status = true;
  }
  void turnOff() {
  /*
  * Desliga a LED
  */
    digitalWrite(pin, LOW);
    status = false;
  }

  void blink() {
  /*
  * Pisca a LED 1 vez
  */
    turnOn();
    delay(1000);
    turnOff();
  }

  int getPin() {
  /*
  * Retorna o Pin da LED
  * @return Pino da LED
  */
    return pin;
  }
};
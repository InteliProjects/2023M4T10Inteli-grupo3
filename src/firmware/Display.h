#include <LiquidCrystal_I2C.h>

class Display {
  /*
   * Abstrai a interação com uma LCD 16x2 no I2C 27
   */
  public:
    Display(uint8_t lcd_Addr) : lcd(lcd_Addr, 16, 2) {}

    void setup() {
      lcd.init();
      lcd.noBacklight();
      home();
    }

    void blinkBacklight() {
    /*
    * Pisca a Backlight da LCD
    */
      lcd.backlight();
      delay(3000);
      lcd.noBacklight();
    }

    void write(String line1, String line2) {
    /*
    * Escreve um texto na LCD
    */
      lcd.clear();
      lcd.setCursor(1,0);
      lcd.print(line1);
      lcd.setCursor(1, 1);
      lcd.print(line2);
    }

    void home() {
      /*
      * Mostra a tela inicial na LCD
      */
      write("Atvos", "Inteli Ashton");
    }

  private:
    LiquidCrystal_I2C lcd;

};
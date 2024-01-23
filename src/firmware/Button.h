class Button {
  /*
   * Esta classe abstrai algumas funcionalidades do component botão
   */
  private:
    int pin;

  public:
    Button(int _pin) {
      pinMode(_pin, INPUT_PULLUP);
      pin = _pin;
    }

    bool pressed() {
    /*
    * Retorna "true" caso o botão esteja pressionado
    */ 
      return !digitalRead(pin);
    }
};
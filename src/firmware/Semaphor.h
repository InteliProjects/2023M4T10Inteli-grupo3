#include "Led.h"

class Semaphor {
  /*
   * Esta classe representa as 3 LEDs de status do projeto
   * Ele é essencialmente um "semáforo" com LED verde, amarela e vermelha.
   */
  public:
    Semaphor(int _greenPin, int _yellowPin, int _redPin) : ledGreen(_greenPin), ledYellow(_yellowPin), ledRed(_redPin) {}

    void error() {
    /*
     * Liga LED vermelha, desliga LED verde
     */
      ledRed.turnOn();
      ledGreen.turnOff();
    }

    void ok() {
    /*
     * Liga LED verde, desliga LED vermelha
     */
      ledGreen.turnOn();
      ledRed.turnOff();
    }

    void alert() {
    /*
     * Pisca a LED amarela
     */
      ledYellow.blink();
    }

  private:
    Led ledGreen;
    Led ledYellow;
    Led ledRed;
};
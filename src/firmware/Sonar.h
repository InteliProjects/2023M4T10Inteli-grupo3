class Sonar {

private:
  /*
   * Esta classe representa o sensor de distância
   * e facilita a interação com o mesmo a partir
   * de outras partes do código.
   */
  int echoPin;
  int trigPin;
  int lastDistance;
  bool previouslyTampered = false;
  int thresholdDistance = 800;

  void setPinModes() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
  }

  void measureDistance() {
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    lastDistance = pulseIn(echoPin, HIGH);
  }

public:
  Sonar(int _echoPin, int _trigPin) {
    echoPin = _echoPin;
    trigPin = _trigPin;
    setPinModes();
  }

  int getDistance() {
  /*
  * Retorna a distância atual
  * @return distância
  */
    measureDistance();
    return lastDistance;
  }

  void setTresholdDistance() {
  /*
  * Seta o limite de distância para a distância atual
  */
    measureDistance();
    thresholdDistance = lastDistance;
  }

  bool tampered() {
  /*
  * Retorna o estado do Tamper
  * @return true se distância > threshold, false caso contrátio
  */
    bool currentlyTampered = getDistance() > 1.15 * thresholdDistance;
    if (currentlyTampered && !previouslyTampered) {
      previouslyTampered = true;
      return true;
    } else if (!currentlyTampered) {
      previouslyTampered = false;
    }

    return false;
  }

  bool getPreviouslyTampered() {
  /*
  * Retorna o estado anterior do Tamper
  * @return true se estava tampered, false se não.
  */
    return previouslyTampered;
  }
};
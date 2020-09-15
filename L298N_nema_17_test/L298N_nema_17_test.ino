#include <Stepper.h>

const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  myStepper.setSpeed(5);
  Serial.begin(9600);
}

void loop() {
  myStepper.step(-stepsPerRevolution);
//  delay();
}

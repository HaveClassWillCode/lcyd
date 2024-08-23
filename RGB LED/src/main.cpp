#include <Arduino.h>

const int pin = 17;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, HIGH);  // LED off
  delay(500);
  digitalWrite(pin, LOW);  // LED on
  delay(50);
}

#include <Arduino.h>

#define analogPin 4
#define digitalPin 5

void setup() {
  Serial.begin(115200);

  pinMode(analogPin, INPUT);
  pinMode(digitalPin, INPUT);

  Serial.println("LDR Sensor Started");
}

void loop() {

  int digitalState = digitalRead(digitalPin);
  int analogValue = analogRead(analogPin);

  Serial.print("Digital = ");
  Serial.print(digitalState);

  Serial.print("   Analog = ");
  Serial.println(analogValue);

  delay(1000);
}
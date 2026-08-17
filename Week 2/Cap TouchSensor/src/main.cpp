#include<Arduino.h>
#define TOUCH_PIN 4

void setup() {
  pinMode(TOUCH_PIN, INPUT);

  Serial.begin(9600);
  Serial.println("Touch Sensor Started");
}

void loop() {
  int touch = digitalRead(TOUCH_PIN);

  if (touch == HIGH) {
    Serial.println("Touched!");
  } 
  else {
    Serial.println("Not Touched");
  }

  delay(100);
}
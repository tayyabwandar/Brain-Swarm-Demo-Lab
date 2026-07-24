#include <Arduino.h>
#include <Servo.h>
Servo servo;
void setup() {
  Serial.begin(115200);
  Serial.println("Started!");
  pinMode(11, INPUT);
  servo.attach(2);
}

void loop() {
  int value = analogRead(11);
  int angle = map(value,0,4095,0,180);
  servo.write(angle);
  Serial.println(angle);
  delay(200);
}

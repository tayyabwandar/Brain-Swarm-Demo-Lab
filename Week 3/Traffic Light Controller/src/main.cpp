#include<Arduino.h>
void setup() {
  Serial.begin(115200);
  Serial.println("LEDs Started!");
  pinMode(7, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(46, LOW);
  digitalWrite(9, LOW);
  delay(5000);

  digitalWrite(7, LOW);
  digitalWrite(15, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(46, LOW);
  digitalWrite(9, LOW);
  delay(5000);

  digitalWrite(7, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, HIGH);
  digitalWrite(46, LOW);
  digitalWrite(9, HIGH);
  delay(2000);



}


#include<Arduino.h>
#define  VertPin 11
#define  HorzPin 16
#define  selPin 8

void setup(){
  Serial.begin(115200);
  pinMode(VertPin, INPUT);
  pinMode(HorzPin, INPUT);
  pinMode(selPin,INPUT_PULLUP);
  Serial.println("The JoyStick Started");
  delay(1000);
}
void loop(){
  int Vertical = analogRead(VertPin);
  int Horizantal = analogRead(HorzPin);
  bool selectionPin = digitalRead(selPin);
    Serial.println("The Vertical Value is: " );
    Serial.println(Vertical);
    Serial.println("The Horizatal Value is: ");
    Serial.println(Horizantal);
    if(selectionPin==LOW){
      Serial.println("Button Pressed!");
    }
    else{
      Serial.println("Button is not Pressed!");
    }

delay(2000);


}
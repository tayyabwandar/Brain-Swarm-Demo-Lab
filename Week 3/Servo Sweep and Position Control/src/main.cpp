#include<Arduino.h>
#include<Servo.h>
#define pwdpin 2
#define potpin 5


Servo servo;


void setup(){
  
  Serial.begin(115200);
  Serial.println("The Servo Stated!");
  pinMode(potpin,INPUT);
  servo.attach(pwdpin);
}

void loop(){

for(int position=0;position<=180;position++){
  Serial.println(position);
servo.write(position);
delay(20);

}
for(int position=180;position>=0;position--){
servo.write(position);
delay(20);
}
while(true){
int value = analogRead(potpin);
int angle =map(value,0,4095,0,180);
servo.write(angle);
Serial.print("Potentiometer: ");
Serial.print(value);

Serial.print(" | Servo Angle: ");
Serial.println(angle);


delay(1000);

}

}

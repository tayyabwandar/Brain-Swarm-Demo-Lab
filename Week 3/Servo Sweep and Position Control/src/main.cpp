#include<Arduino.h>
#include<Servo.h>



Servo servo;



void setup(){
  Serial.begin(115200);
  Serial.println("The Servo Stated!");
  servo.attach(2);
}

void loop(){

for(int position=0;position<=180;position++){
  Serial.println(position);
servo.write(position);
delay(20);

}
for(int position=180;position<=0;position--){
servo.write(position);
delay(20);
}

delay(200);

}
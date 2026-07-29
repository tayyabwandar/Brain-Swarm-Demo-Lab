#include <Arduino.h>
#include<Adafruit_SSD1306.h>
#include<ESP32Servo.h>
#include<Wire.h>
#include<DHTesp.h>


#define DHTTYPE DHT22;
#define DHTPIN 5;


DHTesp dht;
Servo servo;

Adafruit_SSD1306 display(128,64,&Wire,-1);

ESP32PWM pwm;
int freq = 1000;

 float temperature;
 float Humidity;

void oledSetup(){
       display.begin(SSD1306_SWITCHCAPVCC,0x3C);
        display.setTextSize(1);

    display.setTextColor(SSD1306_WHITE);
         display.print("Starting");
         display.clearDisplay();
};
void servoSetup(){
         pwm.attachPin(41,freq,12);

};
void dhtSetup(){
              dht.setup(11,DHTesp::DHT22);

}
// void readDHT() {

//     temperature = dht.getTemperature();
//     delay(30);
//     Humidity = dht.getHumidity();
//     delay(30);

// }

void setup(){
      Wire.begin(36,35);
      pinMode(3,INPUT_PULLUP);
      pinMode(6,INPUT);
       Serial.begin(115200);
       Serial.print("Smart Environmental Monitoring and Control System");
       oledSetup();
       servoSetup();
       dhtSetup();

}


void oled(){
  temperature = dht.getTemperature();
    
    Humidity = dht.getHumidity();
    
       display.clearDisplay();
       display.setCursor(0,0);

        if(isnan(temperature) || isnan(Humidity)){
          display.print("Fail to get values");
        }
       Serial.print(dht.getStatusString());
         
         display.print("Temperature:");
         display.println(temperature);
         display.print("Humidity:");
         display.print(Humidity);
         delay(2000);
         
         if(temperature<25){
          display.print("Cold");
         }
        else if(temperature==25){
               display.print("Room Temperature");

        }
        else{
          display.print("Hot");
        }
        display.display();


}
void servoFun(){
        if(temperature<25){

        servo.write(0);
    
        }
        if(temperature>25)
          servo.write(180);
}

void Joystick(){
    
  int JoystickValuesX = analogRead(6);
  int SEL = digitalRead(3);
  int angle =map(JoystickValuesX,0,4095,0,180);
  if(SEL==LOW){
   servo.write(angle);
  }

}
void loop(){
  // readDHT();
  oled();
  servoFun();
  Joystick();
};
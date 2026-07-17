#include<Arduino.h>
#include<DHT.h>
#define DHTTYPE DHT22

#define dhtpin 4


DHT dhtSensor(dhtpin,DHTTYPE);


void setup(){
  Serial.begin(115200);
  dhtSensor.begin();
  Serial.println("The The Humidity and the Temperature is Sensor is started");
  delay(300);
}

void loop(){
     float humidity = dhtSensor.readHumidity();
     float Temperature = dhtSensor.readTemperature();
   
     if(isnan(humidity)){
        if(isnan(Temperature)){
            Serial.println("Both Humidity & Temperature are inValid");
        }
        delay(1000);
     }

else{
Serial.println("The Humidity is:");
Serial.println(humidity);
Serial.println("----------------");
Serial.println("The Temperature is:");
Serial.println(Temperature);
delay(300);


}

     
}


#include<Arduino.h>
#include<DHTesp.h>
#define DHTTYPE DHT22

#define dhtpin 11


DHTesp dhtSensor;


void setup(){
  Serial.begin(9600);
  dhtSensor.setup(dhtpin, DHTesp::DHT22); 
  Serial.println("The The Humidity and the Temperature is Sensor is started");
  delay(2000);
}

void loop(){
     float humidity = dhtSensor.getHumidity();
     float Temperature = dhtSensor.getTemperature();

   
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
delay(2000);


}

     
}


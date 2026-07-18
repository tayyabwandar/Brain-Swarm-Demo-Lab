#include <Arduino.h>
#include <Adafruit_MPU6050.h>
#include <Wire.h>

#define SCl 4
#define SDA 11
#define Address 0x68

Adafruit_MPU6050 mpu;

void setup()
{

  Serial.begin(115200);
  Serial.println("MPU Sensor Started!");
  Wire.begin(SDA, SCl);
  Wire.write(Address);
}
void loop()
{
  if (!mpu.begin(Address))
  {
    Serial.println("These is no Connection");
  }
  else
  {
    Serial.println("Connection Established");
    sensors_event_t accel, gyro, temp;
    mpu.getEvent(&accel, &gyro, &temp);
    Serial.print("Accel X: ");
    Serial.print(accel.acceleration.x);
    Serial.print("  Y: ");
    Serial.print(accel.acceleration.y);
    Serial.print("  Z: ");
    Serial.println(accel.acceleration.z);
    Serial.print("Gyro X: ");
    Serial.print(gyro.gyro.x);
    Serial.print("  Y: ");
    Serial.print(gyro.gyro.y);
    Serial.print("  Z: ");
    Serial.println(gyro.gyro.z);

    Serial.print("Temp: ");
    Serial.print(temp.temperature);
    Serial.println("////////////////////")
  }
}
# MPU6050 Accelerometer & Gyroscope Sensor



# Overview

This project demonstrates how to interface the **MPU6050** with an **ESP32-S3** using the Arduino framework.

The MPU6050 is a **6-axis Motion Tracking Sensor** that combines:

- A **3-axis Accelerometer**
- A **3-axis Gyroscope**

It communicates with the ESP32 using the **I2C communication protocol**, allowing the ESP32 to measure acceleration, rotation, and device orientation in real time.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand motion sensing
- Learn I2C communication
- Interface MPU6050 with ESP32-S3
- Read acceleration values
- Read gyroscope values
- Calculate device orientation
- Display sensor readings on Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| MPU6050 Module | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| MPU6050 Pin | ESP32-S3 |
|-------------|----------|
| VCC | 3.3V |
| GND | GND |
| SDA | GPIO 11 |
| SCL | GPIO 4 |
| XDA | Not Connected |
| XCL | Not Connected |
| AD0 | GND |
| INT | Optional |

> **Note:**  
> SDA and SCL pins may vary depending on your ESP32-S3 board configuration.

---

# Communication Protocol

The MPU6050 communicates using the **I2C (Inter-Integrated Circuit)** protocol.

- SDA → Serial Data Line
- SCL → Serial Clock Line

The ESP32 acts as the **I2C Master**, while the MPU6050 acts as the **I2C Slave**.

Default I2C Address:

```
0x68
```

If the **AD0** pin is connected to **3.3V**, the address becomes:

```
0x69
```

---

# Library Used

Install from Arduino Library Manager:

- Adafruit MPU6050
- Adafruit Unified Sensor
- Adafruit BusIO

```cpp
#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
```

---

# Pin Configuration

```cpp
#define SDA_PIN 11
#define SCL_PIN 4

Adafruit_MPU6050 mpu;
```

---

# Features

- 3-axis Accelerometer
- 3-axis Gyroscope
- Digital Motion Processing
- I2C Communication
- High-Speed Data Transfer
- Low Power Consumption
- Easy Arduino Integration

---

# Project Structure

```
MPU6050/
│
├── src/
│   └── main.cpp
│
├── platformio.ini
│
└── README.md
```

---

# Sample Output

```
Acceleration

X : 0.23 m/s²
Y : -0.15 m/s²
Z : 9.72 m/s²

Gyroscope

X : 0.04 rad/s
Y : -0.02 rad/s
Z : 0.01 rad/s

Temperature

29.3 °C

--------------------------------
```

---

# Understanding the Sensor Data

## Accelerometer

Measures **linear acceleration** along three axes.

```
X-axis → Left / Right

Y-axis → Forward / Backward

Z-axis → Up / Down
```

Units:

```
m/s²
```

---

## Gyroscope

Measures **angular velocity** around three axes.

```
Roll

Pitch

Yaw
```

Units:

```
rad/s
```

---

## Temperature Sensor

The MPU6050 also contains a built-in temperature sensor.

Typical operating range:

```
-40°C to +85°C
```

---

# How It Works

1. ESP32 initializes the I2C bus.
2. The MPU6050 begins measuring motion.
3. The accelerometer detects linear movement.
4. The gyroscope detects rotational movement.
5. Sensor readings are transmitted through the I2C bus.
6. ESP32 reads the data and prints it on the Serial Monitor.

---

# Applications

- Self-Balancing Robots
- Drone Flight Controllers
- Gesture Recognition
- Robotics
- Motion Tracking
- Smart Wearables
- Vehicle Stability Systems
- Camera Stabilization
- Fall Detection Systems

---

# Troubleshooting

### MPU6050 Not Detected

- Check SDA and SCL wiring.
- Verify the I2C address (0x68 or 0x69).
- Run an I2C scanner sketch.
- Ensure the sensor receives power.

---

### All Values Are Zero

- Verify library installation.
- Confirm successful sensor initialization.
- Check loose jumper wires.

---

### Random or Unstable Readings

- Secure the sensor firmly.
- Reduce vibrations.
- Keep wiring short.
- Avoid electrical noise.

---

### Compilation Errors

Install the required libraries:

- Adafruit MPU6050
- Adafruit Unified Sensor
- Adafruit BusIO

---

# Future Improvements

- Display orientation on OLED
- Build a digital inclinometer
- Control a robot using tilt
- Wireless motion monitoring
- Gesture-controlled robotics
- Motion logging to SD card
- IoT motion dashboard

---

# References

- MPU6050 Datasheet
- Adafruit MPU6050 Library
- ESP32-S3 Documentation
- I2C Communication Specification

---

# Repository

**Brain-Swarm-Lab**

Week 2 → MPU6050 Accelerometer & Gyroscope Sensor

---

## Author

**Muhammad Tayyab**

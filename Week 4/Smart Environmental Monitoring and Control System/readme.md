# Week 4 – Smart Environmental Monitoring and Control System

## 📌 Overview

This project demonstrates an event-driven embedded system using the ESP32-S3. It integrates multiple sensors and actuators to monitor environmental conditions and automatically respond based on predefined thresholds.

The system displays real-time information on an OLED display, controls a servo motor for ventilation, provides LED status indications, and allows manual control using a joystick.

---

## 🎯 Objectives

- Learn event-driven embedded programming.
- Use non-blocking programming with `millis()`.
- Integrate multiple sensors and actuators.
- Display live sensor data on an OLED.
- Implement automatic and manual control modes.

---

## 🛠 Hardware Components

- ESP32-S3 DevKitC-1
- DHT22 Temperature & Humidity Sensor
- OLED Display (I2C, 128×64)
- Servo Motor
- Joystick Module
- LEDs
- Breadboard
- Jumper Wires

---

## 📚 Libraries Used

```cpp
Arduino.h
Wire.h
DHT.h
Adafruit_GFX.h
Adafruit_SH110X.h
Servo.h
```

---

## ⚙ Features

### 🌡 Temperature & Humidity Monitoring

- Reads temperature from DHT22.
- Reads humidity from DHT22.
- Updates values continuously.

---

### 📺 OLED Dashboard

Displays:

- Temperature
- Humidity
- Servo Status
- System Mode
- Alerts

---

### 🤖 Automatic Servo Control

When the temperature exceeds the threshold:

- Servo rotates to open the vent.

When the temperature becomes normal:

- Servo returns to the closed position.

---

### 🕹 Manual Override

The joystick can manually control the servo position.

This demonstrates human-machine interaction.

---

### 💡 LED Indicators

LEDs indicate system status.

Example:

- Green → Normal
- Yellow → Warning
- Red → High Temperature

---

### ⏱ Non-Blocking Programming

The project uses:

```cpp
millis()
```

instead of

```cpp
delay()
```

This allows:

- Smooth sensor updates
- Responsive joystick control
- Continuous OLED refresh
- Simultaneous task execution

---

## 📂 Project Structure

```
Week-4/
│
├── src/
│   └── main.cpp
│
├── diagrams/
│   └── Circuit Diagram
│
├── images/
│   ├── Hardware Setup
│   └── OLED Output
│
└── README.md
```

---

## 🔄 System Flow

```
Start
   │
   ▼
Initialize ESP32
   │
   ▼
Initialize Sensors
   │
   ▼
Read DHT22
   │
   ▼
Update OLED
   │
   ▼
Check Temperature
   │
   ├─────────────► High?
   │                 │
   │                 ▼
   │          Open Servo
   │
   ▼
Read Joystick
   │
   ▼
Manual Override
   │
   ▼
Update LEDs
   │
   ▼
Repeat
```

---

## 🧠 Concepts Learned

- Event-driven programming
- Embedded system design
- Sensor integration
- Servo control
- OLED graphics
- I2C communication
- Analog input reading
- Non-blocking programming
- State-based programming

---

## 📸 Project Demonstration

Add the following:

- Hardware setup images
- Wokwi simulation screenshot
- OLED display screenshot
- Working video (optional)

---

## 🚀 Future Improvements

- Wi-Fi connectivity
- MQTT communication
- Firebase integration
- Mobile application
- Data logging
- Web dashboard
- Blynk IoT support

---

## 👨‍💻 Author

**Muhammad Tayyab**


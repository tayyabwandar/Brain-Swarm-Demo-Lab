# PIR Motion Sensor



# Overview

This project demonstrates how to interface a **PIR (Passive Infrared) Motion Sensor** with an **ESP32-S3** using the Arduino framework.

The PIR sensor detects motion by sensing changes in infrared radiation emitted by humans and animals. Whenever motion is detected, the sensor outputs a HIGH digital signal that the ESP32 reads and displays on the Serial Monitor.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand Passive Infrared sensing
- Interface PIR sensor with ESP32-S3
- Read digital input signals
- Detect human motion
- Display motion status using Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| PIR Motion Sensor (HC-SR501) | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| PIR Pin | ESP32-S3 |
|----------|----------|
| VCC | 5V (or 3.3V if supported) |
| OUT | GPIO 4 |
| GND | GND |

---

# Pin Configuration

```cpp
#define PIR_PIN 4
```

---

# Features

- Detects human motion
- Digital HIGH/LOW output
- Low power consumption
- Easy to interface
- Suitable for security systems

---

# Project Structure

```
PIR_Motion/
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
Motion Detected!

No Motion

Motion Detected!
```

---

# How It Works

1. The PIR sensor continuously monitors infrared radiation.
2. A moving human changes the infrared pattern.
3. The sensor outputs HIGH.
4. ESP32 reads HIGH using digitalRead().
5. Motion status is printed to the Serial Monitor.

---

# Applications

- Home Security
- Automatic Lights
- Smart Door Systems
- Alarm Systems
- Occupancy Detection
- Energy Saving Systems

---

# Troubleshooting

### Always HIGH

- Wait 30–60 seconds after powering the sensor.
- Adjust sensitivity and delay potentiometers.

### No Detection

- Verify wiring.
- Ensure the sensor has completed initialization.
- Check GPIO number.

---

# Future Improvements

- Turn on LED during motion
- Send notifications over Wi-Fi
- Trigger camera recording
- Control relays automatically

---

# References

- HC-SR501 Datasheet
- ESP32-S3 Documentation

---

# Repository

**Brain-Swarm-Lab**

Week 2 → PIR Motion Sensor

---

## Author

**Muhammad Tayyab**


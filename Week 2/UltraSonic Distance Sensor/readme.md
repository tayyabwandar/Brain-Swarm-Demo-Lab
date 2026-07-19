# HC-SR04 Ultrasonic Distance Sensor



# Overview

This project demonstrates how to interface the **HC-SR04 Ultrasonic Distance Sensor** with an **ESP32-S3** using the Arduino framework.

The HC-SR04 measures the distance between the sensor and an object by transmitting an ultrasonic sound wave and measuring the time taken for the echo to return.

The ESP32 calculates the distance using the speed of sound and displays the measured distance on the Serial Monitor.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand ultrasonic distance measurement
- Interface HC-SR04 with ESP32-S3
- Learn Trigger and Echo signal operation
- Measure distance using pulse timing
- Calculate distance from echo time
- Display measurements on the Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| HC-SR04 Pin | ESP32-S3 |
|-------------|----------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 11 |
| ECHO | GPIO 17 |

> **Important:**  
> The HC-SR04 **ECHO pin outputs 5V**, while ESP32 GPIO pins are **3.3V tolerant only**. Use a **voltage divider or logic level shifter** to reduce the ECHO signal to 3.3V before connecting it to the ESP32.

---

# Library Used

No external library is required.

```cpp
#include <Arduino.h>
```

---

# Pin Configuration

```cpp
#define TRIG_PIN 11
#define ECHO_PIN 17
```

---

# Features

- Non-contact distance measurement
- Fast and accurate readings
- Simple digital interface
- Real-time object detection
- Beginner-friendly implementation
- Compatible with ESP32-S3

---

# Project Structure

```
Ultrasonic/
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
Distance : 15.42 cm

Distance : 21.87 cm

Distance : 98.14 cm

--------------------------
```

---

# How It Works

1. ESP32 sends a **10 µs pulse** to the **TRIG** pin.
2. The HC-SR04 transmits an ultrasonic wave at **40 kHz**.
3. The sound wave travels through the air.
4. When it hits an object, it reflects back to the sensor.
5. The **ECHO** pin remains HIGH for the duration of the round trip.
6. ESP32 measures this time using `pulseIn()`.
7. Distance is calculated using the speed of sound.

---

# Distance Calculation

The speed of sound at room temperature is approximately:

```
343 m/s
```

Distance formula:

```text
Distance = (Time × Speed of Sound) / 2
```

Arduino implementation:

```cpp
distance = duration * 0.0343 / 2;
```

Where:

- `duration` = Echo pulse time (µs)
- `0.0343` = Speed of sound (cm/µs)
- Divide by **2** because the sound travels to the object and back.

---

# Measurement Range

| Parameter | Value |
|-----------|-------|
| Operating Voltage | 5V |
| Frequency | 40 kHz |
| Minimum Distance | 2 cm |
| Maximum Distance | 400 cm |
| Accuracy | ±3 mm |

---

# Applications

- Obstacle Avoidance Robots
- Autonomous Vehicles
- Smart Parking Systems
- Water Level Monitoring
- Distance Measurement
- Automatic Doors
- Industrial Automation
- Object Detection

---

# Troubleshooting

### Always Reads 0 cm

- Verify TRIG and ECHO wiring.
- Check the GPIO pin numbers.
- Ensure the sensor receives 5V power.

---

### Random Readings

- Keep the sensor stable.
- Avoid angled or soft surfaces.
- Remove nearby obstacles causing reflections.

---

### No Output

- Verify the Serial Monitor baud rate (115200).
- Ensure `pulseIn()` is receiving the echo signal.
- Check all jumper wire connections.

---

### Incorrect Distance

- Confirm the distance calculation formula.
- Ensure the object is within the sensor's operating range.
- Use a level shifter or voltage divider for the ECHO pin.

---

# Future Improvements

- Display distance on OLED
- Build a parking assistant
- Create a water tank level monitor
- Add buzzer alerts for nearby objects
- Send distance data over Wi-Fi
- Integrate with robotic navigation

---

# References

- HC-SR04 Datasheet
- ESP32-S3 Documentation
- Arduino pulseIn() Reference

---

# Repository

**Brain-Swarm-Lab**

Week 2 → HC-SR04 Ultrasonic Distance Sensor

---

## Author

**Muhammad Tayyab**

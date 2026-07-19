# DHT22 Temperature & Humidity Sensor

---

# Overview

This project demonstrates how to interface the **DHT22 (AM2302)** Temperature and Humidity Sensor with an **ESP32-S3** using the Arduino framework.

The ESP32 reads environmental temperature and relative humidity from the DHT22 sensor and displays the values on the Serial Monitor.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand digital environmental sensors
- Interface DHT22 with ESP32-S3
- Learn Single-Wire communication
- Read temperature values
- Read humidity values
- Handle invalid sensor readings
- Display sensor data using Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| DHT22 Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| DHT22 Pin | ESP32-S3 |
|-----------|----------|
| VCC | 3.3V |
| DATA | GPIO 4 |
| NC | Not Connected |
| GND | GND |

> **Note:**  
> If using the bare DHT22 sensor (without module), connect a **10kΩ pull-up resistor** between DATA and VCC.

---

# Library Used

Install from Arduino Library Manager:

- DHT sensor library by Adafruit
- Adafruit Unified Sensor

```cpp
#include <DHT.h>
```

---

# Pin Configuration

```cpp
#define DHTPIN 4
#define DHTTYPE DHT22
```

---

# Features

- Reads temperature in Celsius
- Reads relative humidity
- Detects sensor errors
- Simple and beginner-friendly code
- Suitable for IoT weather stations
- Works with ESP32-S3

---

# Project Structure

```
DHT22/
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
Humidity: 48.70 %

Temperature: 31.40 °C

--------------------------
Humidity: 48.80 %

Temperature: 31.50 °C
```

---

# How It Works

1. ESP32 initializes the DHT22 sensor.
2. The sensor measures:
   - Air Temperature
   - Relative Humidity
3. The readings are sent digitally over a single data pin.
4. ESP32 receives the data.
5. Values are printed to the Serial Monitor every second.

---

# Applications

- Weather Stations
- Smart Homes
- Greenhouse Monitoring
- HVAC Systems
- Indoor Climate Monitoring
- IoT Projects
- Environmental Data Logging

---

# Troubleshooting

### Sensor returns `nan`

- Check wiring
- Verify GPIO pin
- Wait at least 2 seconds between readings
- Confirm DHT22 is selected (not DHT11)

---

### No Output

- Verify Serial Baud Rate (115200)
- Check USB cable
- Ensure correct COM port

---

### Incorrect Values

- Ensure power supply is 3.3V
- Avoid loose jumper wires
- Keep wiring short

---

# Future Improvements

- Display readings on OLED
- Send data to MQTT
- Upload to Firebase
- Store readings in SD Card
- Create web dashboard
- Add heat index calculation

---

# References

- ESP32-S3 Documentation
- Adafruit DHT Library
- DHT22 Datasheet

---

# Repository

**Brain-Swarm-Lab**

Week 2 → DHT22 Temperature & Humidity Sensor

---

## Author

**Muhammad Tayyab**
# HX711 Load Cell Amplifier


---

# Overview

This project demonstrates how to interface an **HX711 Load Cell Amplifier** with an **ESP32-S3** to measure weight using a load cell.

A load cell produces a very small analog voltage (in millivolts) when force is applied. Since this voltage is too small for the ESP32 to measure directly, the **HX711** amplifies and converts it into a digital signal that the ESP32 can read.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand how load cells work
- Learn the purpose of the HX711 amplifier
- Interface HX711 with ESP32-S3
- Read digital weight values
- Calibrate the load cell
- Remove zero offset using tare
- Display weight on the Serial Monitor

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| HX711 Amplifier Module | 1 |
| 1kg/5kg Load Cell | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

## HX711 to ESP32-S3

| HX711 Pin | ESP32-S3 |
|-----------|----------|
| VCC | 3.3V |
| GND | GND |
| DT (DOUT) | GPIO 15 |
| SCK | GPIO 8 |

---

## Load Cell to HX711

| Load Cell Wire | HX711 Pin |
|---------------|-----------|
| Red | E+ |
| Black | E- |
| Green | A+ |
| White | A- |

> **Note:** Wire colors may vary between manufacturers. Always verify using your load cell datasheet.

---

# Library Used

Install from Arduino Library Manager:

- HX711 by Bogde

```cpp
#include <HX711.h>
```

---

# Pin Configuration

```cpp
#define DATA_PIN 15
#define CLOCK_PIN 8

HX711 loadcell;
```

---

# Features

- Reads weight from the load cell
- High-resolution 24-bit ADC
- Supports tare (zeroing)
- Calibration support
- Stable and accurate measurements
- Simple Arduino interface

---

# Project Structure

```
HX711_Load_Cell/
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
HX711 Started

Weight:
0.00 g

Weight:
154.32 g

Weight:
328.71 g

Weight:
512.84 g
```

---

# How It Works

1. The load cell converts applied force into a tiny electrical signal.
2. The HX711 amplifies this weak signal.
3. The HX711 converts the analog signal into a 24-bit digital value.
4. The ESP32 reads the digital data through the DT and SCK pins.
5. A calibration factor converts the raw value into weight.
6. The measured weight is displayed on the Serial Monitor.

---

# Calibration

Before measuring actual weight, calibrate the load cell.

Example:

```cpp
float calibrationFactor = -7000;

loadcell.set_scale(calibrationFactor);
loadcell.tare();
```

- `set_scale()` applies the calibration factor.
- `tare()` removes the weight of the platform so the reading starts at zero.

The calibration factor depends on your specific load cell and must be determined experimentally.

---

# Applications

- Digital Weighing Scale
- Smart Kitchen Scale
- Industrial Weighing Systems
- Inventory Monitoring
- Smart Dustbin
- IoT Weight Monitoring
- Agricultural Weighing Systems

---

# Troubleshooting

### Always shows 0

- Check DT and SCK wiring.
- Verify the load cell is connected correctly.
- Make sure the HX711 receives power.

---

### Negative Readings

- Recalibrate the sensor.
- Reverse the calibration factor sign if necessary.

---

### Unstable Values

- Secure the load cell firmly.
- Avoid vibrations.
- Check loose wires.
- Average multiple readings for better stability.

---

### No Output

- Verify Serial Monitor baud rate (115200).
- Ensure the HX711 library is installed correctly.
- Confirm the GPIO pin numbers match your code.

---

# Future Improvements

- Display weight on OLED
- Upload data to Firebase
- Send readings over Wi-Fi
- Add automatic calibration
- Store measurements on SD Card
- Build a smart weighing dashboard

---

# References

- HX711 Datasheet
- HX711 Arduino Library
- ESP32-S3 Documentation

---



## Author

**Muhammad Tayyab**
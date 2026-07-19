# LDR Light Sensor



# Overview

This project demonstrates how to interface an **LDR (Light Dependent Resistor) Sensor Module** with an **ESP32-S3**.

The LDR changes its resistance according to the intensity of light. The sensor module provides both analog and digital outputs, allowing the ESP32 to measure light intensity or detect whether the environment is bright or dark.

This project is part of **Week 2** of the **Brain-Swarm-Lab** embedded systems learning roadmap.

---

# Learning Objectives

- Understand LDR working principle
- Read analog values using ADC
- Read digital threshold output
- Interface LDR with ESP32-S3
- Monitor ambient light intensity

---

# Hardware Required

| Component | Quantity |
|-----------|----------|
| ESP32-S3 Development Board | 1 |
| LDR Sensor Module | 1 |
| Breadboard | 1 |
| Jumper Wires | As Required |

---

# Wiring Diagram

| LDR Pin | ESP32-S3 |
|----------|----------|
| VCC | 3.3V |
| GND | GND |
| AO | GPIO 4 |
| DO | GPIO 5 |

---

# Pin Configuration

```cpp
#define ANALOG_PIN 4
#define DIGITAL_PIN 5
```

---

# Features

- Reads analog light intensity
- Detects bright and dark conditions
- Adjustable sensitivity
- Simple interface
- Suitable for IoT projects

---

# Project Structure

```
LDR_Sensor/
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
Analog Value : 2780
Digital State : LOW

Analog Value : 430
Digital State : HIGH
```

---

# How It Works

1. The LDR changes its resistance according to light intensity.
2. The sensor module converts resistance changes into voltage.
3. ESP32 reads:
   - Analog value using `analogRead()`
   - Digital state using `digitalRead()`
4. The measured values are displayed on the Serial Monitor.

---

# Applications

- Automatic Street Lights
- Smart Lighting Systems
- Solar Trackers
- Light Intensity Monitoring
- IoT Automation
- Energy Saving Systems

---

# Troubleshooting

### Analog Value Doesn't Change

- Verify AO connection.
- Use an ADC-capable GPIO.
- Shine a flashlight on the sensor.

### Digital Output Always HIGH/LOW

- Adjust the onboard potentiometer.
- Verify DO wiring.

### Incorrect Readings

- Avoid loose wires.
- Ensure proper power supply.
- Check ADC pin configuration.

---

# Future Improvements

- Display readings on OLED
- Build automatic night lamp
- Upload light data to cloud
- Generate light intensity graphs
- Integrate with home automation

---

# References

- LDR Sensor Module Datasheet
- ESP32-S3 Documentation

---



---

## Author

**Muhammad Tayyab**


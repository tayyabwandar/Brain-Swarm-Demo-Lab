# Week 1 – ESP32 Basics

Welcome to **Week 1** of the **Brain Swarm Demo Lab**. This week introduces the fundamentals of ESP32 programming using the Arduino framework, PlatformIO, and the Wokwi simulator.

The experiments focus on the basic input/output peripherals and communication interfaces that every embedded systems developer should understand before moving on to advanced topics.

---

## 📚 Projects Covered

| Project | Description |
|---------|-------------|
| 🖥️ Hello World | Learn how to initialize Serial communication and print messages to the Serial Monitor. |
| 💡 Blink LED | Learn how to control an external LED using GPIO pins and digital output. |
| 🔘 Push Button | Read user input using a push button and understand digital input with internal pull-up resistors. |
| 🌗 PWM LED Dimming | Control LED brightness using Pulse Width Modulation (PWM). |
| 🎛️ Potentiometer | Read analog voltage using the ESP32's Analog-to-Digital Converter (ADC). |
| 📺 OLED Display | Interface an SSD1306 OLED display using the I²C communication protocol and display text. |

---
# Week 2 – Sensor Interfacing

Week 2 focuses on interfacing commonly used sensors with the **ESP32-S3**. These projects introduce analog, digital, and I²C-based sensors, providing hands-on experience in acquiring real-world data for embedded systems and IoT applications.

---

## 📚 Projects Covered

| Project | Description |
|---------|-------------|
| 🌡️ DHT22 | Measure temperature and humidity using a digital sensor. |
| ⚖️ HX711 Load Cell | Read weight measurements using a load cell amplifier. |
| 🚶 PIR Motion Sensor | Detect human motion using passive infrared sensing. |
| ☀️ LDR Sensor | Measure ambient light intensity using analog and digital outputs. |
| 🎮 Analog Joystick | Read X-axis, Y-axis, and push button inputs. |
| 📐 MPU6050 | Measure acceleration and angular velocity using a 6-axis IMU over I²C. |
| 📏 HC-SR04 Ultrasonic | Measure object distance using ultrasonic sound waves. |

---

## 🎯 Learning Objectives

By completing Week 2, you will learn how to:

- Interface analog, digital, and I²C sensors
- Read environmental and motion data
- Measure distance, light intensity, and weight
- Acquire accelerometer and gyroscope data
- Process sensor outputs using the ESP32-S3
- Debug sensor communication and calibration
- Build a foundation for robotics and IoT applications

---



## 📂 Folder Structure

```text
Week 2/
├── DHT22/
├── HX711 Load Cell/
├── PIR Motion Sensor/
├── LDR Sensor/
├── Analog Joystick/
├── MPU6050/
├── HC-SR04 Ultrasonic/
└── README.md
```

E

A collection of common issues and solutions encountered while developing ESP32-S3 projects using **PlatformIO** and **Wokwi**.

---

## 📌 Common Issues and Solutions

### 1. Select the Correct Board

When creating a new PlatformIO project, always select the correct board.

For ESP32-S3 projects, use:

```ini
esp32-s3-devkitc-1
```

Selecting the wrong board can lead to:
- Compilation errors
- Incorrect pin mapping
- Peripheral incompatibility
- Simulation failures

---

### 2. Add `diagram.json`

If you are using the **Wokwi Community License**, create a file named:

```text
diagram.json
```

Copy the JSON configuration from the Wokwi website and paste it into this file.

---

### 3. Configure `wokwi.toml`

Create a file named:

```text
wokwi.toml
```

Example:

```toml
[wokwi]
version = 1
firmware = ".pio/build/esp32-s3-devkitc-1/firmware.bin"
elf = ".pio/build/esp32-s3-devkitc-1/firmware.elf"
```

Ensure the firmware and ELF paths are correct.

---

### 4. Verify Firmware and ELF Paths

If the simulation does not start:

- Verify `firmware.bin` exists.
- Verify `firmware.elf` exists.
- Ensure both paths match your build directory.

---

### 5. Use Forward Slashes (`/`)

When copying file paths from Windows, replace backslashes (`\`) with forward slashes (`/`).

❌ Incorrect

```text
.pio\build\esp32-s3-devkitc-1\firmware.bin
```

✅ Correct

```text
.pio/build/esp32-s3-devkitc-1/firmware.bin
```

---

### 6. Check `platformio.ini`

Ensure the board matches the one selected when creating the project.

```ini
[env:esp32-s3-devkitc-1]
platform = espressif32
board = esp32-s3-devkitc-1
framework = arduino
```

---

### 7. Install Required Libraries

If your project uses external libraries, include them in `platformio.ini`.

```ini
lib_deps =
    adafruit/Adafruit GFX Library@^1.12.6
    adafruit/Adafruit SSD1306@^2.5.17
```

Missing libraries will cause compilation errors.

---

### 8. Use `INPUT_PULLUP` for Push Buttons

Instead of:

```cpp
pinMode(buttonPin, INPUT);
```

Use:

```cpp
pinMode(buttonPin, INPUT_PULLUP);
```

This prevents floating inputs and removes the need for an external pull-up resistor in most cases.

---

### 9. Use Hardware PWM

Do **not** use:

```cpp
analogWrite(pin, value);
```

Instead, use the ESP32 LEDC hardware PWM API.

---

### 10. Configure PWM Correctly

Always configure the PWM channel before attaching it to a pin.

```cpp
ledcSetup(channel, frequency, resolution);
ledcAttachPin(pin, channel);
ledcWrite(channel, dutyCycle);
```

Do **not** call `ledcAttachPin()` before `ledcSetup()`.

---

### 11. Initialize Serial Communication

If using the Serial Monitor, always initialize Serial.

```cpp
Serial.begin(115200);
```

Make sure the Serial Monitor uses the same baud rate.

---

## ✅ Troubleshooting Checklist

- ✅ Selected the correct board (`esp32-s3-devkitc-1`)
- ✅ Added `diagram.json`
- ✅ Created `wokwi.toml`
- ✅ Verified firmware and ELF paths
- ✅ Used forward slashes (`/`) in file paths
- ✅ Checked `platformio.ini`
- ✅ Installed required libraries
- ✅ Used `INPUT_PULLUP` for push buttons
- ✅ Used hardware PWM instead of `analogWrite()`
- ✅ Called `ledcSetup()` before `ledcAttachPin()`
- ✅ Initialized Serial using `Serial.begin(115200)`

---

## 🤝 Contributing

Found another common issue? Feel free to open an issue or submit a pull request to help improve this guide.

## 🎯 Learning Objectives

By completing these projects, you will learn how to:

- Set up ESP32 projects using PlatformIO
- Simulate hardware using Wokwi
- Use the Serial Monitor for debugging
- Configure GPIO pins as inputs and outputs
- Control LEDs using digital signals
- Read button states using `digitalRead()`
- Generate PWM signals to control LED brightness
- Read analog values using the ESP32 ADC
- Communicate with peripherals using the I²C protocol
- Display text on an OLED screen

---

## 🛠 Software Used

- Visual Studio Code
- PlatformIO IDE
- Wokwi Simulator
- Arduino Framework

---

## 📂 Folder Structure

```
Week 1/
├── ESP32 Hello World/
├── ESP32 Blink LED/
├── ESP32 PushButton/
├── ESP32 PWM LED Dimming/
├── ESP32 Potentiometer/
├── ESP32 OLED Display/
└── README.md
```

Each project contains:

- Source code (`src/main.cpp`)
- Circuit diagram (`diagram.json`)
- PlatformIO configuration (`platformio.ini`)
- Wokwi configuration (`wokwi.toml`)
- Project documentation (`README.md`)
- Images showing the circuit and simulation output

---

## 🚀 Getting Started

1. Clone the repository.

```bash
git clone https://github.com/tayyabwandar/Brain-Swarm-Demo-Lab.git
```

2. Open the project in **Visual Studio Code**.

3. Install the following extensions:

- PlatformIO IDE
- Wokwi Simulator

4. Open any project inside the **Week 1** folder.

5. Build and run the simulation.

---

## 📖 Prerequisites

Basic knowledge of:

- C/C++ Programming
- Variables and Functions
- Arduino Programming (recommended but not required)

---

## 📌 Week 1 Summary

During Week 1, you built a strong foundation in ESP32 programming by learning:

- Serial Communication
- GPIO Programming
- Digital Input and Output
- Analog Input (ADC)
- Pulse Width Modulation (PWM)
- I²C Communication
- OLED Display Interfacing

These concepts form the building blocks for future projects involving sensors, actuators, IoT, robotics, and embedded systems.

---

## 👨‍💻 Author

**Muhammad Tayyab**  

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

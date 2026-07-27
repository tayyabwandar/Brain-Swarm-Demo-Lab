# Interactive OLED

This project demonstrates how to use an **OLED display with the ESP32** to create an interactive display system. The ESP32 reads input data and displays the corresponding information on the OLED screen in real time.

This project combines multiple modules, demonstrating how different components can work together as an integrated embedded system.

---

## Components Required

- ESP32 Development Board
- SSD1306 OLED Display (128×64)
- Input Module / Sensor
- Jumper Wires
- Wokwi Simulator
- PlatformIO

---


## Concepts

### OLED Display

An OLED (Organic Light Emitting Diode) display is an output device used to show text and graphics. In this project, the OLED provides visual feedback to the user.

---

### I²C Communication

The OLED communicates with the ESP32 using the **I²C protocol**.

I²C uses two main communication lines:

- **SDA (Serial Data)** – Transfers data between the ESP32 and OLED.
- **SCL (Serial Clock)** – Provides the clock signal for communication.

The ESP32 sends display information to the OLED through these two lines.

---

### Input and Output

This project demonstrates how an embedded system can connect an **input** to an **output**.

```text
Input / Sensor
      │
      ▼
    ESP32
      │
      ▼
  OLED Display
```

The ESP32 reads the input value, processes it, and displays the result on the OLED.

---

### Real-Time Display

The OLED is continuously updated while the program is running. This allows the user to see changes in the input value in real time.

For example, sensor readings or other input values can be displayed as:

```text
Value: 1234
```

As the input changes, the value shown on the OLED also changes.

---

### Display Buffer

The OLED library uses a display buffer. Text and graphics are first written to the buffer and then transferred to the physical OLED using:

```cpp
display.display();
```

This updates the screen with the latest information.

---

## Steps

1. Open the project in VS Code using PlatformIO.
2. Build the project.
3. Start the Wokwi simulation.
4. Interact with the input device or change the sensor value.
5. Observe the ESP32 reading the input.
6. Check the OLED display for the updated value.

---

## Expected Output

### Circuit Diagram

![Interactive OLED Circuit]()

### OLED Display Output

![Interactive OLED Output]()

The OLED displays the current input or sensor value.

When the input changes, the ESP32 processes the new value and updates the OLED display.

---

## Project Structure

```text
Interactive OLED/
├── src/
│   └── main.cpp
├── include/
├── lib/
├── test/
├── platformio.ini
├── diagram.json
├── wokwi.toml
├── .gitignore
├── images/
│   
└── README.md
```

---

## Learning Outcomes

After completing this project, you will understand:

- How to interface an OLED display with the ESP32
- How I²C communication works
- How to use SDA and SCL lines
- How to display real-time information on an OLED
- How to read and process input data
- How to combine multiple modules in one embedded system
- How input data can be processed and displayed as output
- How to build an interactive ESP32 application

---

## Author

**Muhammad Tayyab**

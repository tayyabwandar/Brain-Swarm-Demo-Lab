# Brain Swarm Demo Lab

An ESP32 learning portfolio built with the Arduino framework, PlatformIO, and Wokwi. Each task is self-contained: its folder holds the source code, PlatformIO configuration, and, where available, a Wokwi circuit diagram and recorded demonstration.

## Run a project

1. Open one task folder in VS Code with PlatformIO installed.
2. Build the project for the board configured in platformio.ini; most tasks use ESP32-S3 DevKitC-1.
3. Start Wokwi when the folder includes diagram.json and wokwi.toml, or upload the firmware to the matching physical circuit.
4. Open the Serial Monitor at the baud rate used in src/main.cpp.

## Task catalogue

The **Demo video** column links only to recordings stored in this repository. A dash means a recording has not yet been provided, not that the task has failed.

| Week | Task | What it demonstrates | Documentation | Demo video |
| --- | --- | --- | --- | --- |
| 1 | ESP32 Hello World | Sends a repeating message over the serial connection. | [README](<Week 1/Week1 Simulations/ESP32 Hello World/readme.md>) | — |
| 1 | Blink LED | Drives an LED on GPIO 2 in a one-second on/off loop. | [README](<Week 1/Week1 Simulations/ESP32 Bink LED/Blink LED/readme.md>) | [Watch](<Week 1/Week1 Simulations/ESP32 Bink LED/Blink LED/BlinkLed.mp4>) |
| 1 | Push Button | Reads a pull-up button and reports its state through Serial. | [README](<Week 1/Week1 Simulations/ESP32 PushButton/ESP32 PushButton/readme.md>) | [Watch](<Week 1/Week1 Simulations/ESP32 PushButton/ESP32 PushButton/pushButton.mp4>) |
| 1 | PWM LED Dimming | Fades an LED by changing the ESP32 LEDC PWM duty cycle. | [README](<Week 1/Week1 Simulations/ESP32 PWM LED Dimming/ESP32 PWM LED Dimming/readme.md>) | [Watch](<Week 1/Week1 Simulations/ESP32 PWM LED Dimming/ESP32 PWM LED Dimming/PWM.mp4>) |
| 1 | Potentiometer | Samples an analog voltage and prints the ADC value. | [README](<Week 1/Week1 Simulations/ESP32 Potentiometer/Esp32 Potentiometer/readme.md>) | — |
| 1 | OLED Display | Initializes an SH1106 OLED over I²C and displays a lab message. | [README](<Week 1/Week1 Simulations/ESP32 OLED Display/ESP32 OLED Display/readme.md>) | [Watch](<Week 1/Week1 Simulations/ESP32 OLED Display/ESP32 OLED Display/Oled.mp4>) |
| 2 | Cap Touch Sensor | Reads a digital input and reports the observed state. | [README](<Week 2/Cap TouchSensor/readme.md>) | [Watch](<Week 2/Cap TouchSensor/Cap_touch.mp4>) |
| 2 | DHT Sensor | Reads temperature and humidity from a DHT11. | [README](<Week 2/DHT Sensor/readme.md>) | — |
| 2 | HX711 Load Cell | Tares a load cell and reports calibrated weight. | [README](<Week 2/HX711 Load Cell/readme.md>) | — |
| 2 | Joystick | Reads the joystick X/Y analog channels and switch. | [README](<Week 2/JOY Stick/readme.md>) | — |
| 2 | LDR Sensor | Reports analog light level and digital bright/dark threshold. | [README](<Week 2/LDR Sensor/readme.md>) | [Watch](<Week 2/LDR Sensor/LDR.mp4>) |
| 2 | MPU6050 | Obtains acceleration, angular-rate, and temperature data over I²C. | [README](<Week 2/MPU Sensor/readme.md>) | — |
| 2 | PIR Sensor | Detects motion through a digital PIR output. | [README](<Week 2/PIR Sensor/readme.md>) | [Watch](<Week 2/PIR Sensor/PIR.mp4>) |
| 2 | Ultrasonic Distance Sensor | Converts HC-SR04 echo timing into centimetres and inches. | [README](<Week 2/UltraSonic Distance Sensor/readme.md>) | — |
| 3 | Interactive OLED | Displays DHT22 temperature and humidity readings on an SSD1306 OLED. | [README](<Week 3/Interactive OLED/readme.md>) | [Watch](<Week 3/Interactive OLED/WeatherSat.mp4>) |
| 3 | Joystick-Controlled Servo | Maps a joystick analog value to a servo angle. | [README](<Week 3/Joystick controlled servo/readme.md>) | — |
| 3 | Servo Sweep and Position Control | Sweeps a servo, then takes its position from a potentiometer. | [README](<Week 3/Servo Sweep and Position Control/readme.md>) | — |
| 3 | Traffic Light Controller | Runs timed red, yellow, and green LED states. | [README](<Week 3/Traffic Light Controller/readme.md>) | [Watch](<Week 3/Traffic Light Controller/traffic_lights.mp4>) |
| 4 | Smart Environmental Monitoring and Control | Shows DHT22 readings on OLED and adjusts a servo from the environment/joystick. | [README](<Week 4/Smart Environmental Monitoring and Control System/readme.md>) | — |
| 5 | Blockly App Exploration | Documents the Blockly ESP32 app’s serial-port loading issue and recommended checks. | [README](<Week 5/readme.md>) | — |
| 6 | PIR Motion-Triggered Smart Light | Turns the light on after motion and off after ten seconds without it. | [README](<Week 6/PIR Motion-Triggered Smart Light/readme.md>) | [Watch](<Week 6/PIR Motion-Triggered Smart Light/PIR&Light.mp4>) |
| 6 | Smart Weather Station | Shows DHT22 temperature and humidity on an SSD1306 OLED. | [README](<Week 6/Smart Weather Station/readme.md>) | [Watch](<Week 6/Smart Weather Station/WhatsApp Video 2026-09-18 at 8.32.29 AM.mp4>) |
| 7 | Application Controlled LED | Provides HTTP endpoints for LED control and DHT11 sensor readings. | [README](<Week 7/Application Controlled LED/readme.md>) | [Watch](<Week 7/Application Controlled LED/WhatsApp Video 2026-09-17 at 6.20.48 AM.mp4>) |

## Repository layout

- **src/main.cpp** — the Arduino application for the task.
- **platformio.ini** — PlatformIO board, framework, and library configuration.
- **diagram.json** — Wokwi circuit definition, when the task has a simulator setup.
- **wokwi.toml** — Wokwi firmware and ELF paths.
- **readme.md** — task explanation, expected behaviour, and a demo-video link when one is available.

## Video coverage

Recorded task videos are included for Blink LED, Push Button, PWM LED Dimming, OLED Display, Cap Touch Sensor, LDR Sensor, PIR Sensor, Interactive OLED, Traffic Light Controller, PIR Motion-Triggered Smart Light, Smart Weather Station, and Application Controlled LED. Recordings for the other catalogue entries are not currently present in the repository.

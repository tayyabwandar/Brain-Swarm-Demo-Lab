# ESP32 Capacitive Touch Input

This task explores reading a digital touch-related input with an ESP32-S3. The sketch samples GPIO 4 every 100 ms and writes either **Touched!** or **Not Touched** to the Serial Monitor. It introduces the basic read–decide–report loop used by many digital sensors.

## How the sketch works

1. GPIO 4 is configured as an input.
2. Serial communication starts at 9600 baud.
3. The program reads GPIO 4 with digitalRead().
4. A HIGH state is reported as touched; a LOW state is reported as not touched.

## Run it

Build with PlatformIO for the ESP32-S3 DevKitC-1, then open the Serial Monitor at 9600 baud. The circuit definition is stored in diagram.json.

## Important wiring note

The current Wokwi diagram uses an ILI9341 capacitive-touch display. GPIO 4 is wired to that display's D/C control pin; it is **not** wired to a dedicated touch-output or interrupt pin. Therefore, this sketch documents and demonstrates a generic digital-input read, but it will not provide a reliable touch state from that display until the touch controller is connected to a valid output pin and read with the appropriate driver/library.

## Expected serial output

    Touch Sensor Started
    Touched!

or:

    Not Touched

## Learning outcomes

- Configure an ESP32 GPIO as an input.
- Read a digital logic level with digitalRead().
- Use Serial output to observe program state.
- Verify that the circuit wiring matches the pin the code is reading.

## Demo video

[Watch the recorded demonstration](<Cap_touch.mp4>).


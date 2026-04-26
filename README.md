# SerialGameControllerAdapter

SerialGameControllerAdapter.ino is an ESP32 Arduino project that reads inputs from NES, SNES, PS1, PS2, or a Bluetooth controller and outputs the button presses over serial.
The motivation was to simplify controller input to a Cheap Yellow Display (CYD) running [Anemoia-ESP32, a NES emulator for the ESP32](https://github.com/Shim06/Anemoia-ESP32).
The pins brought out to the connectors on the CYD do not provide a lot of options for directly wiring a controller to the board.
Also Anemoia-ESP32 disables Bluetooth to conserve resources.
To work around these limitations SerialGameControllerAdapter.ino runs on a separate ESP32 board and sends button presses to Anemoia-ESP32 running on the CYD over a serial connection (Serial1) to the connector closest to the SD card slot (3.3V, GPIO27, GPIO22, GND). 

WebSerialController.html is a webpage that uses WebSerial to send button presses to Anemoia-ESP32 over the USB to serial connection (Serial0, aka Serial).


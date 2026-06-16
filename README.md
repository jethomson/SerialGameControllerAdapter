# SerialGameControllerAdapter

<img src="https://raw.githubusercontent.com/jethomson/jethomson.github.io/refs/heads/main/SerialGameControllerAdapter_images/prototype_full.jpg" width="60%">

<img src="https://raw.githubusercontent.com/jethomson/jethomson.github.io/refs/heads/main/SerialGameControllerAdapter_images/prototype_closeup.jpg" width="60%">


SerialGameControllerAdapter is an ESP32 project that reads inputs from NES, SNES, PS1, PS2, or a Bluetooth controller and outputs the button presses over serial.
The motivation was to simplify controller input to a Cheap Yellow Display (CYD) running [Anemoia-ESP32, a NES emulator for the ESP32](https://github.com/Shim06/Anemoia-ESP32).

The pins brought out to the connectors on the CYD do not provide a lot of options for directly wiring a controller to the board.
Also Anemoia-ESP32 disables Bluetooth to conserve resources.
To work around these limitations SerialGameControllerAdapter runs on a separate ESP32 board and sends button presses to Anemoia-ESP32 running on the CYD over a serial connection (Serial1) to the connector closest to the SD card slot (3.3V, GPIO27, GPIO22, GND). 

<br>
<br>

<img src="https://raw.githubusercontent.com/jethomson/jethomson.github.io/refs/heads/main/SerialGameControllerAdapter_images/webserial_controller.png">

[WebSerialController.html](https://htmlpreview.github.io/?https://raw.githubusercontent.com/jethomson/SerialGameControllerAdapter/refs/heads/main/WebSerialController.html) is a webpage that uses WebSerial to send button presses to Anemoia-ESP32 over the USB cable.
This webpage is nice for testing out Anemoia-ESP32 before doing any wiring or soldering. Of course, if you want to use Anemoia-ESP32 without a wired controller, then WebSerialController.html is all you need to control it. **No wiring is required!**

For everyday use, please download WebSerialController.html and use a local copy instead of using the version hosted on htmlpreview.github.io. That site is only meant for previewing web pages.


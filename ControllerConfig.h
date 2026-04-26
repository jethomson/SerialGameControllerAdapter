#ifndef CONTROLLERCONFIG_H
#define CONTROLLERCONFIG_H


// SerialGameControllerAdapter is written with the ability to have the active controller set via UART
// but if you are sure you only want to use one type of controller you can set DEFAULT_CONTROLLER_TYPE
// The chosen controller will be initialized at boot an UART commands to switch controller types
// will be ignored.
//#define DEFAULT_CONTROLLER_TYPE GP_SNES


#define CONTROLLER_UART_RX 21 // to CYD 27
#define CONTROLLER_UART_TX 22 // to CYD 22


// GPIOs 34 to 39 are GPIs – input only pins that lack internal pull-up resistors
// Individual pins for DIY input device
// Untested
#define DIY_A_BUTTON 26
#define DIY_B_BUTTON 18
#define DIY_LEFT_BUTTON 33
#define DIY_RIGHT_BUTTON 19
#define DIY_UP_BUTTON 17
#define DIY_DOWN_BUTTON 23
#define DIY_START_BUTTON 16
#define DIY_SELECT_BUTTON 5


// pin assignments are based on what makes for orderly wiring on an ESP32 D1 mini
// and so the pin with the external pull-up resistor is always the data pin
// so that swapping controllers is easier

// NES controller pins
// 5V, Data, Latch, Clock, GND
#define GAMEPAD_NES_DATA 26
#define GAMEPAD_NES_LATCH 18
#define GAMEPAD_NES_CLK 19


// SNES controller pins
// GND, Data, Latch, Clock, 5V (3.3V usually works)
#define GAMEPAD_SNES_DATA 26
#define GAMEPAD_SNES_LATCH 18
#define GAMEPAD_SNES_CLK 19


// PS1/PS2 controller pins
// Data, Command, GND, 3.3V, Attention, Clock 
#define GAMEPAD_PSX_DATA 26 
#define GAMEPAD_PSX_COMMAND 18
#define GAMEPAD_PSX_ATTENTION 19
#define GAMEPAD_PSX_CLK 23

#endif

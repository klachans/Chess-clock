# Chess clock
STM32 MCU-based project, a chess clock with live timing and data displayed on webside hosted by ESP8266 module.
## Hardware
* STM32 Nucleo L073RZ
* ESP8266 + NodeMCU v3
* MAX7219 8*7-segment display
* SD Card Reader
## Software
* STM32-side code with chess clock and other hardware logic
* ESP8266-side code which accounts for hosting website, receiving data from STM32 and displaying data on website
* STM32 and ESP8266 communicate via UART.
## Overview
Chess clock with 4 physical buttons (2 for switching players, 2 for changing presets and starting/stopping/resuming/aborting the game. Informations are displayed on 8*7-segment display and on website, which is hosted on ESP8266+NodeMCU module. STM32 and ESP866 communicate via UART. Project is also predeveloped for SD-Card (required resources are included and functions are prepared).

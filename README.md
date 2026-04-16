# UART_DRIVER_STM32
register-level UART driver for the STM32G4 series (ARM Cortex-M4). 
This project demonstrates low-level peripheral configuration without the use of abstraction layers like HAL or LL, focusing on hardware-to-software interfacing and C standard library integration.
Key FeaturesBare-Metal Implementation: 
Direct register manipulation using CMSIS headers.
Accurate Baud Rate Generation.
Supports both polled transmission (TX) and reception (RX).
Modular Architecture: Clean separation between peripheral driver (uart.c/h) and application logic

# STM32F411RE UART Bare-Metal Driver

This repository contains a **bare-metal UART driver implementation** for the STM32F411RE microcontroller (ARM Cortex-M4).  
The project is built using **STM32CubeIDE** with **no HAL**—only CMSIS and device headers are used.

---

##  Features

- Bare-metal UART initialization
- TX/RX register-level configuration
- GPIO configuration for UART pins
- Clock configuration (RCC)
- Simple TX routines (blocking)
- Startup code and linker scripts included

---

##  Target & Toolchain

| Item | Value |
|------|-------|
| **MCU** | STM32F411RE (Cortex-M4) |
| **Clock** | 16 MHz HSI (or adjust as needed) |
| **Toolchain** | STM32CubeIDE (GCC ARM) |
| **Language** | C (bare metal, register level) |

---

##  Project Structure
stm32f411re_uart/
│── Inc/ # Header files
│── Src/ # Source files
│── Startup/ # Startup code for STM32F411RE
│── .project # STM32CubeIDE metadata
│── .cproject # STM32CubeIDE metadata
│── .gitignore # Ignoring build outputs
│── README.md # This file


---

## 📚 Dependencies (IMPORTANT)

This project depends on the **STM32CubeF4 Firmware Package**, which provides the CMSIS and device headers, including:

- `stm32f4xx.h`
- `system_stm32f4xx.h`
- CMSIS core files (e.g., `core_cm4.h`)

These files are **not stored in the repository**.

### ✔ Ensure STM32CubeF4 Firmware Package is installed

In STM32CubeIDE:

Help → Manage Embedded Software Packages
Install

Right-click Project → Properties -> Paths and Symbols -> Add -> File System
\headers\CMSIS\Include
\headers\CMSIS\Device\ST\STM32F4xx\Include




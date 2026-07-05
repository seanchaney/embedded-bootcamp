# Firmware Engineering Roadmap (2026)

## Goals and Methodology

**Timeline:** 24 weeks (approx. 6 hours/day). Target interview-readiness for junior/new-grad embedded roles by Week 16.

**Scope:** Narrow and deep technical competence focusing on the industry-standard requirements for early-career engineers:
* **C Programming:** Pointers, memory models, volatile/static keywords, and bit manipulation.
* **Hardware Architecture:** ARM Cortex-M (STM32) driven directly from reference manuals and datasheets.
* **Protocols & Concurrency:** Serial buses (UART, SPI, I2C), hardware interrupts, and Direct Memory Access (DMA).
* **RTOS:** Deterministic scheduling and concurrency safety using FreeRTOS.

**Methodology:** * Skip abstract computer science theory in favor of practical hardware implementation.
* Minimize reliance on Hardware Abstraction Layers (HAL) to ensure register-level understanding.
* Validate all protocol implementations using physical hardware and logic analyzer captures.

---

## Planned Structure

### STAGE 0: Toolchain & Environment Setup (Week 1)
* **Goal:** Establish a working development environment and Git workflow.
* **Primary Resource:** STM32CubeIDE (bundled GNU ARM toolchain) + Native macOS Terminal.
* **Project:** *Hello, repo*: Create portfolio structure with top-level documentation.
* **Benchmark:** Create, compile, and push a base project to GitHub with a clean commit history.

### STAGE 1: C for Embedded (Weeks 1–4)
* **Goal:** Convert general programming ability into embedded-specific C fluency.
* **Primary Resource:** *Effective C, 2nd Edition* (Seacord, 2024).
* **Project:** *C Toolbox*: Implement a fixed-size circular buffer, custom bit-manipulation macros, and a finite state machine from scratch. Includes unit tests.
* **Benchmark:** Write a circular buffer without references; explain `volatile` and `static` in multiple contexts; explain stack vs. heap and the zero-`malloc` rule.

### STAGE 2: Bare-Metal ARM Cortex-M (Weeks 4–9)
* **Goal:** Understand the execution path from power-on to `main()` and drive hardware via direct register writes.
* **Primary Resource:** *Modern Embedded Systems Programming* (Miro Samek).
* **Hardware:** STM32 Nucleo-F446RE.
* **Project:** *Bare-Metal Blinky*: Configure GPIO by writing directly to RCC and GPIO registers using the STM32F446 datasheet, bypassing HAL.
* **Benchmark:** Explain the reset vector, `.data`/`.bss` initialization, and interrupt vector table; configure a GPIO pin via registers.

### STAGE 3: Peripherals & Writing Real Drivers (Weeks 8–14)
* **Goal:** Drive standard peripherals (UART, SPI, I2C, Timers, ADC, DMA) and construct modular drivers.
* **Primary Resource:** ControllersTech STM32 Tutorials.
* **Project A:** *UART Driver From Scratch*: Interrupt-driven UART TX/RX with a ring buffer, no HAL for core logic.
* **Project B:** *Interrupt-Driven Sensor Logger*: Read an I2C/SPI sensor, timestamp via hardware timers, buffer, and stream over UART using DMA.
* **Benchmark:** Debug a bus problem with a logic analyzer; structure code into clean driver and application layers.

### STAGE 4: Real-Time Operating Systems (Weeks 14–17)
* **Goal:** Understand real-time multitasking, scheduling, queues, and concurrency protections.
* **Primary Resource:** *Introduction to RTOS* (Shawn Hymel) + FreeRTOS Official Documentation.
* **Project:** *RTOS Multi-Sensor System*: Port the Stage 3 logger to FreeRTOS. Implement separate tasks for sampling, processing, and output via queues, protected by mutexes.
* **Benchmark:** Explain preemptive priority scheduling; deliberately create and fix a priority inversion scenario using priority inheritance.

### STAGE 5: System Design, Debugging & Capstone (Weeks 16–24)
* **Goal:** Apply professional design patterns, master fault debugging, and build a sector-aligned capstone.
* **Primary Resource:** *Making Embedded Systems, 2nd Edition* (Elecia White) + Memfault *Interrupt* blog (HardFault debugging).
* **Capstone:** *Biosignal Data Logger (Medical/Neurotech Track)*. Sample analog input via ADC+DMA, apply a digital filter (moving-average or IIR), and log data.
* **Benchmark (Interview-Ready):** Defend the capstone architecture end-to-end; debug a HardFault live; explain MCU and memory layout decisions.

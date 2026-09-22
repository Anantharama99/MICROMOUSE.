# MICROMOUSE.

TB6612FNG                 STM32F103
────────────────────────────────────────
VCC       ──────────────── 3.3 V
GND       ──────────────── GND
STBY      ──────────────── PB12

PWMA      ──────────────── PA8
AIN1      ──────────────── PB0
AIN2      ──────────────── PB1

PWMB      ──────────────── PA9
BIN1      ──────────────── PB10
BIN2      ──────────────── PB11

TB6612FNG                 Connection
────────────────────────────────────────
VM        ──────────────── Battery switched +
GND       ──────────────── Battery GND
A01/A02   ──────────────── Left motor wires
B01/B02   ──────────────── Right motor wires

100–470 µF capacitor:
Capacitor + ───── TB6612 VM
Capacitor - ───── TB6612 GND


STM32                     All five VL53L0X modules
──────────────────────────────────────────────────
3.3 V       ────────────── VCC/VIN
GND         ────────────── GND
PB6         ────────────── SCL of every module
PB7         ────────────── SDA of every module

STM32 PA0 ─────────────── Left sensor XSHUT
STM32 PA1 ─────────────── Right sensor XSHUT
STM32 PA2 ─────────────── Front-left sensor XSHUT
STM32 PA3 ─────────────── Front-right sensor XSHUT
STM32 PA4 ─────────────── Front-center sensor XSHUT

                    ┌──────────────┐
PB6 SCL ────────────┤ SCL  Sensor 1│
PB7 SDA ────────────┤ SDA  Sensor 1│
3.3 V   ────────────┤ VCC          │
GND     ────────────┤ GND          │
PA0     ────────────┤ XSHUT        │
                    └──────────────┘

                    ┌──────────────┐
PB6 SCL ────────────┤ SCL  Sensor 2│
PB7 SDA ────────────┤ SDA  Sensor 2│
3.3 V   ────────────┤ VCC          │
GND     ────────────┤ GND          │
PA1     ────────────┤ XSHUT        │
                    └──────────────┘

Repeat for sensors 3, 4, and 5.

1. Connect battery to buck input.
2. Measure buck output with a multimeter.
3. Adjust the potentiometer until the output is exactly 5.0 V.
4. Turn off the battery.
5. Connect buck output to the STM32 5V/VIN pin.

LiPo positive
     │
     ▼
  Switch
     │
     ├────────────── TB6612 VM
     │
     └────────────── Buck input +

LiPo negative
     ├────────────── TB6612 GND
     └────────────── Buck input -

Buck output +5 V ─── STM32 5V/VIN
Buck output GND ─── STM32 GND

STM32 3.3 V ─── Sensor VCC
STM32 GND  ──── Sensor GND
STM32 3V3
VL53L0X VCC
STM32 GPIO pins

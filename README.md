# Cinder - A filament dryer!

[![License](https://img.shields.io/github/license/CircuitGuy943/CinderV2-Filament-Dryer)](https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/LICENSE.md)
&nbsp;
[![Hack Club Funded](https://img.shields.io/badge/Hack_Club-Funded-EC3750?style=flat&logo=hackclub&logoColor=EC3750)](https://hackclub.com/)
&nbsp;
![Status](https://img.shields.io/badge/Status-In_Development-orange?style=flat)
&nbsp;
[![Last commit](https://img.shields.io/github/last-commit/CircuitGuy943/CinderV2-Filament-Dryer?style=flat)](https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/commits/main/)
&nbsp;
[![GitHub stars](https://img.shields.io/github/stars/CircuitGuy943/CinderV2-Filament-Dryer?style=flat&color=yellow)](https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/stargazers)

1. Make fusion 3D Renders
3. What Cinder is, why you built it, and what you wanted to improve over your previous dryer. Put your best render or finished-build photo here.
4. What is finished, what has been tested, and what still needs work. Distinguish planned features from working ones.
5. Explain the path of the air and filament, how the heaters and fans work together, and how the controller uses sensor readings. A labeled diagram would help.
6. Specifications	Dimensions, supported spool sizes, power requirements, heater power, and other confirmed specifications. Label design targets separately from measurements.
7. An overview of the tools, skills, materials, and steps needed to build one.
8. Bill of materials	Parts, quantities, exact part numbers, supplier links, and approximate costs. Include screws, inserts, connectors, and wiring.
9. Printing and fabrication	Which files to print, material choices, orientation, supports, tolerances, and any laser-cut parts. Include settings you actually tested.
10. Assembly	Numbered instructions with photos or renders, covering the enclosure, spool mechanism, heaters, fans, and electronics.
11. Electronics and wiring	PCB overview, schematic, connector labels, wiring diagram, pin assignments, supply requirements, and board revisions.
12. Firmware and setup	How to build and flash the firmware, required tools or libraries, configuration, and sensor calibration.
13. Using Cinder	What the buttons and display do, how to load filament, start a drying cycle, and stop the machine.
14. Safety	Heater mounting, electrical protection, temperature limits, and any implemented fault handling. Be clear about protections that are still planned or untested.
15. Known issues and troubleshooting	Problems you have found, symptoms others might encounter, workarounds, and fixes.
16. Use of clip connectors
17. Talk about how there is a space for silica gel packets but also about how the gaps in the cages may cause them to slip out or hit the fan blades.
18. Talk about the new grills

19. Find best 3d printer filament in terms of SHC and melting point.

Code to-do-list:
1. Add filament preset for temperature


## Contents 

- [Overview](#overview)
    - [Features](#features)
    - [Design Issues](#design-issues)
    - [Firmware](#firmware)
    - [PCB](#pcb)
    - [Specification](#specification)
- [Make your own!](#make-your-own)
    - [Bill of materials](#bill-of-materials)
    - [Printing](#printing)
    - [Electronics & Wiring](#electronics--wiring)
    - [Assembly](#assembly)
- [Showcase](#showcase)



## Overview


<img align="right" src="Pictures\Journal Pictures\Clear\fusion10.2.png" alt="CAD image" width="400"/>


Cinder is a complete filament dryer formed from 2 seperate 45W heaters. It features slots for 3 5020 fans with pockets for siliga gel pouches to aid in drying performance. Combines two NCP thermistors with an SHT40 module to accurately read and record internal temperature and humidity levels while maintaing safe levels below the recommended printing plastic temperature. The total 90W ensures a very quick and agile heating profile to quickly dry filament. By reducing heat up times and rapidily drying filament this ensures less energy is wasted through heat diffusion to the surroundings. The control panel also features a 128x64 I2C powered OLED as the main display with 3 buttons and a rotary encoder to code/adjust any inputs for material/temperatures.

The build itself is designed to aesthetically pleasing with orange flame accents on the side. To make up for the instability of the elongated shape the design also includes an extendible leg at the back to support the model when free-standing. It also utilizies a special, seperately designed expanding rack design to adjust the spool holder dimensions, this in turn ensures that multiple spool sizes can be accomodated without risk of scraping against the heater flex-pcb. The lid of the model flips open upwards and back togethor with the front control panel on a pin hinge at the rear end. Designed to be easily printable with a frame split into seperate 210x210mm pieces to accomodate most 3D printers.

There is also space for a custom stepper-motor powered filament extruder to aid filament out of the heater. This includes a filament extrusion rate feedback integration that automatically controls the filament push rate. However this was discontinued due to the difficulty of making such a system reliable.


<br clear="all">

### Features:

- I2C 128x64 OLED display
- 2x NCP Thermistor support
- SHT4x support
- Fan support (3x 5020 slots, with PWM)
- 90W max heating power support (with PWM)
- Pouches for Silica Gel packets
- Automatic locking system for holding spools with variable arm diameter

### Design Issues and potential improvements:

///

1. One of the orange fire accents crossed over a screw hole
2. There is no support in the middle between the two sides, leading to inconsistencies
3. PCB has no NTC Thermistor support
Brace on the middle to increase strength
overcomplicated filament holder design

EC1 is now GPIO10
EC2 is now GPIO9

Improvements:

Big PETG pieces warped very easily and led to misaligned gluing. Solution would be to make it from lots of smaller pieces.

Having 2 rolls in unit is unnecessary, could just have 1 unit hold 1 roll but make it modular and the units stackable so more units can be printed to accommodate more rolls. Even if each unit has its own control board, it could be simplified. But with a single power supply.

dodgy pin on layer 4 of the extender

///

### Firmware:
### PCB:

<img align="right" src="Pictures\Journal Pictures\Clear\fusion10.2.png" alt="CAD image" width="400"/>

***Note**: Most of these component choices are based on the lowest possible cost/assembly at home. Not efficiency*

At the centre of the mainboard is the RP2040-Zero board used as the main microcontroller. 


<br clear="all">

### Specification:

Power: 90W minimum, the heater and the PCB traces/MOSFETS are designed to comfortably run within those limits. So check the MOSFET specifications you are using if you want to modify power usage by changing the heaters.

Voltage: The system is designed to run on my laptop charger, which supplies 19V, however as long as the 5V regulator and MOSFETS can run on the specified voltage, it could run higher. I also used 24V fans as that's closest to 19V. However BEWARE that running a higher voltage means you will have to modify the heater design AND check the traces/power specifications so the system can run the new power profile.

## Make your own!

### Bill of materials:


- The actual print (alot, probably like 1-2kg+)
- The main PCB (check KiCad files for all the components and external modules)
- 3 5020 fans
- A stepper motor
- Some lasercut acrylic
- MX keycaps (3)
- Some M2 heated inserts and bolts to hold the whole thing togethor

### Printing:
### Electronics & Wiring:
### Assembly:


## Showcase

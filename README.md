# Cinder Filament Dryer - A fully featured 90W filament dryer for all your drying needs!

The cinder filament dryer is a self managed ecosystem comprising of 2 45W heaters powered from a 90W+ power supply to provide the most heating power possible. In addition to that, there is also space for 3 possible fans with silica gel pouch to aid in the airflow and dryer performance. Equiped with an SHT40 module, you will always be 110% aware of exactly how long your filament will take to dry and at what temperature and with a 90W heater, I can guarantee that won't be long ;). Also comes in a cool, tilted design with a fancy flame aesthetic on the side, it also utilizes a smart locking system that adapts the arm of the spool holder to the width of the spool hole, this way, you can ensure the spool is free to spin properly and doesn't scratch the heating element. And if that isn't enough filament flow for you, there is also a dedicated servo driving system and filament extrusion rate feedback integration that automatically pushes out the strand of filament so that the printer, or you, don't have to worry about printing while drying. Comes with a 128x64 OLED, 3 buttons and an encoder for all your "control panel" needs because, we all love fancy control panels don't we? The frame itself is designed to be easy to print (albeit quite large) and assemble. And not to mention with the amazing aesthetic comes a super cool futuristic, pod like door system that lifts upwars on a big pin hinge to allow you to remove the spools or insert more. And obviously, we don't want tipping dryers so, on another pin hinge, we have a leg that can be bent backwards flush to the device when the dryer is hung on the wall or extended so that it literally doesn't fall over.

Some CAD images:

<img src=Pictures/final2.png alt="CAD image" width="400"/> <img src=Pictures/final3.png alt="CAD image" width="400"/>

## Features:
- It drys filament (duh)
- 90W heating power
- OLED display control panel with 3 buttons, encoder and a cool acrylic view panel
- Leg (pretty simple) to hold it from falling backwards
- Fully integrated PCB that drives the 90W heaters, stepper motor driver, OLED, buttons and connectors for all the other sensors.
- Filament pushing system with extruding feedback to maintain proper filament pushing flow
- Easy to assemble
- Airflow powered by 3 5020 fans (LOTS of airflow)
- Spaces for silica gel pouches
- Fancy, cool looking tilted design with flame aesthetics
- Automatic locking system for holding the spool with an arm extendible in diameter <sup>TM</sup>
- PWM control of fans and heater

## PCB
And this is my main PCB. A bit budget restrained otherwise so I had to use some premade sensor modules, the actual flex heater PCB is pretty simple so I won't bother putting it here (but it's in the files):

<img src=Pictures/pcb_front_v2.png alt="PCB View" width="300"/> <img src=Pictures/pcb_back_v2.png alt="PCB View" width="300"/> 

And the Schematic:

<img src=Pictures/main_schematic3.png alt="Schematic" width="800"/>

And here are some 3D views as well:

<img src=Pictures/pcb_3d_v2.png alt="PCB 3D" width="800"/>
<img src=Pictures/pcb_3d_v2_2.png alt="PCB 3D" width="800"/>

## Firmware Overview
At the current moment there is some, untested firmware in there that's supposed to have the dryer functioning but, I don't actually have it yet so I can't test, in future I will program it properly.

## BOM:

- The actual print (alot, probably like 1-2kg+)
- The main PCB (check KiCad files for all the components and external modules)
- 3 5020 fans
- A stepper motor
- Some lasercut acrylic
- MX keycaps (3)
- Some M2 heated inserts and bolts to hold the whole thing togethor

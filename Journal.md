
Feb 1, 2026 1.5h
I'M DONE!!! (At least just the CAD design). I've finished adding that filament pusher module thing (It's kind of a stretch whether it'll actually work or not, if it doesn't work then it's fine, as I can just use the dryer without that while printing, and I don't have to print with the spool inside the dryer. And I also tweaked a few other small things to make it printable, including that leg, and now I should be done and ready to print (probably will be a lot to print sadly, a few spools maybe...). Now just for the firmware then SHIP TIME!!

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion15.1.png

Tools: Fusion360
Jan 29, 2026 4.0h
I now want to add a system that uses a stepper motor with the premade filament grip/push thing off my old Bowden setup and a small IR distance sensor that automatically pushes a little bit of filament every time the sensor detects the filament line has gone taunt, meaning the dryer kind of pushes it's own filament whenever it detects filament is being pulled by something else. This is because my old dryer had the problem where the printer wouldn't be able to pull the filament or the line would go so taunt that it would pull the dryer itself or mess up the print. So I spent a decent amount of time modelling this stepper motor and the stuff that goes around it and made a start on the actual system that makes the filament line bend upwards to evade detection when no pulling is happening. After this feature of the dryer is done I should be practically done (besides firmware, which won't take too long).

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion13.1.png

Tools: Fusion360
Jan 28, 2026 0.75h
I now also added the holes on each side of the design for the M2 heated inserts and bolts to tighten everything up and hold it together. Then I cleaned it up with wide fillets and made it look nice.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion12.1.png

Tools: Fusion360
Jan 28, 2026 1.0h
I also added a leg so that the dryer doesn't literally just fall over the first time you want to use it. I also have the problem of it being so tall, which could make it tip over easily, however, the whole point is that it's thin so it can be fit into tight places.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion13.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion13.2.png

Tools: Fusion360
Jan 28, 2026 2.0h
I finally finished off the extender and made sure it fits into the main device properly and added tolerances and stuff. Now that that's done, I need to add the automatic filament pusher system and add mountings everywhere needed for heated inserts to assemble the thing.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion10.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion10.2.png

Tools: Fusion360
Jan 28, 2026 1.5h
I took a PNG file from the internet that had more or less vector like drawings of cartoony fire. Then I vectorized them into DXF files. Inserted them into fusion, then cleaned up the vectorized file to get extrudable lines and sections, then I extruded this onto the left and right sides of the design, to add a very cool fire aesthetic to match the "Cinder" naming that I am very proud of.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion11.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion11.2.png

Tools: Fusion360
Jan 27, 2026 3.5h
I extended it further again as I need like 80mm of length and I also added a sort of pawl mechanism to stop the gears from spinning the other way under the weight of the filament spool. But then I also added a way to push back said pawls and be able to rotate it the other way to remove the filament spool. And I reimported it into my main design.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion9.1.png

Tools: Fusion360
Jan 26, 2026 1.5h
I then also realized I had made the design for 50mm... whereas I needed 70mm because that is my spool width. So I had to add another pair of rack gears and extend the whole thing outwards, this meant I had to also change the base piece to have slightly more components and still be stickable together and actually work. However, that's done now and I've reupdated the one in my main design.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.5.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.6.gif
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.7.png

Tools: Fusion360
Jan 26, 2026 5.0h
Today I spent a lot of time making the gear arm spool holder part of the design in a separate design file. I first started off with the rack and spur gears then after I made sure they worked with motion links I scaled them upwards, offsetting them 90 degrees for every pair (or 2x2) then had 3 pairs offset 45 degrees off of each other. This made making the case of it quite difficult, and this took the most while, and to make all the cutouts for the racks and how the separate pieces will stick together (there's like 20 of them 😭). And then 0.2mm clearances everywhere needed. Anyways, that's done and dusted and I've imported it into my main design now and positioned it. Now I have to make the actual system for it to be removable and how I am going to keep it in place (and also a clip system so that it doesn't move by the weight of the spool, which it will do). But that's for tomorrow. I probably will have to also stop tomorrow and not get time to add the stepper motor for automated filament extrusion if reboot doesn't get extended.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.1.mp4
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.3.gif
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion8.4.png

Tools: Fusion360
Jan 25, 2026 2.0h
I made a design of a rack gear and a spur gear to get a good grip of how to design gears and how to assemble joints and motion links. I will be planning to use this now to design the single spur and double rack system that will push outwards when turned. Now I need to either import or rebuild this into my main design (and also sort that into components as I know how to use components now but I haven't before) and extend the pieces outwards so I effectively have four pieces going outwards.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion7.1.png

Tools: Fusion360
Jan 24, 2026 1.5h
I now need to find out how to make the filament spool holder arm (two of them). The two main requirements is for the arm itself to be able to be pulled back or removed somehow so that the spool can actually be pulled out through the top, the other requirement is for the arm to be extendible in size. The reason for this is because I need to be able to accommodate different spool hole diameters (by letting the user adjust it) so that the spool doesn't hit/rub against the bottom of the chamber, or in other words the flex PCB heater, which could end badly.

First off I will go from the inside out and design the expanding mechanism.

I started of with a sort of 4 arms on static hinges that also then have some longer, thinner arms attached to hinges in the middle on a rotating piece (see design), this should technically work and should allow the user to expand or shrink the resulting diameter by turning the center piece that connects through hinges to the thinner arms.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/design3.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion6.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion6.2.png

However, I realized this design wasn't very good at all. I need a minimum movement zone from 50mm to 80mm diameter, which this design would be tricky to fulfill with. Besides that it's also just simply overly complicated and error/friction prone.

So I decided to try a Fibonacci spiral that pushes on a pin upwards to hold the spool.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion6.3.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion6.4.png

However, I very quickly realized that this also wasn't a very good solution, because the actual section of the Fibonacci spiral would hit the shrinking diameter when turning the knob to shrink it and we wouldn't get anywhere, it would also not be a linear decrease and so confusing for the user, besides also have a steep step on the other side. (I've also just realized while typing this that I also need to add somehow for it to lock in place so that it doesn't shrink on it's own, only when the user moves it). So now I will try and make a simple circular gear and four gear racks on the side that go outwards

Tools: Fusion360
Jan 24, 2026 3.0h
I realized that I had forgotten so far to add any sort of door, or way to actually put in or take out filament out of the device. So I added a pin hinge (quite large, of about 20mm diameter for the pin) at the top back of the device, such that the whole front and top opens upwards in a really cool fighter jet cockpit like opening movement. In terms of wiring, I will have to be careful to route everything through over the pin hinge and allow enough leeway for movement.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion5.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion5.2.png

I also realized that well, hot air rises, and I had left a considerable gap at the top where the PCB sits, this would be that gap would act as a chimney and escape for all the hot air my 90W heater is trying to heat up. So I filled that up and now the only gap left is the small printer tolerance required to make sure it fits fine.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion5.3.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion5.4.png

Tools: Fusion360
Jan 23, 2026 3.0h
I added two segmented locations in which you can mount 50x20mm fans. (Or and depth fan actually). I made sure they are tilted such that it drives air around the device in the most efficient way, and next to them I also added small "pouches" or segments where you can also place silica gel when assembling the product. The silica gel won't necessarily be a one use thing, if the filament dryer can reach a high enough temperature, say 60-80C (PETG filament will be needed as PLA is not gonna work with that), then the silica packets can also be dried themselves. In that case they can stay there permanently and can be used as a sort of buffer so that when the device is turned on, it dries the chamber much faster and also it stays dryer for longer when turned off.

I'm also making to keep it as easy to print as possible, making sure I only have extrusions in the direction I will be printing and keeping overhangs minimal.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.6.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.5.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.4.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.3.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion3.1.png

Tools: Fusion360
Jan 23, 2026 1.0h
I also added a fan mount for the bottom of the device, for a third fan as an intake. However, if a fan isn't added here then it would cause air leakage so I also made a quick cover piece that can be placed inside if you don't want to use that fan inlet.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion4.1.png

Tools: Fusion360
Jan 23, 2026 0.5h
I added the location where the SHT40 sensor will attach. I included the normal tolerances of 0.2mm for printing and made sure it was orientated and close enough to the PCB to be easy to attach and connect.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion4.2.png

Tools: Fusion360
Jan 22, 2026 4.0h
I completely finished, after a while or trialing different positions and ways to make it, the mounting point and "control panel" cover for the PCB. There are the normal two side panels which come together around the filament (these will, in future, stick together using M2 bolts and heated inserts). I also added a front panel to cover the PCB for a more aesthetic look, this also attaches using 4 heated inserts. I added spaces for the buttons and the OLED display, I will also move the OLED display up using some suspension pieces so that it's not to sunk into the design. I also made sure there is space for the cables for programming and power that go into the device, however that leaves a gap which may become a problem in terms of heat loss. I also added a space for an acrylic panel above the PCB in the left over space on the control panel to add a nice aesthetic of seeing what's on the inside of it.


https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion2.1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion2.2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion2.3.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/fusion2.4.png

Tools: Fusion360
Jan 21, 2026 1.5h
Added the basic spool dimensions and shape after some figuring out for the main shape of the filament dryer. I've decided that I will have two pieces that separate down the middle which will attach using heated inserts and bolts. I could also add an aesthetic third piece as a strip down the middle that I could color green to provide the "cinder" look.

image.png

Tools: Fusion360
Jan 15, 2026 5.0h
I had to make some major changes that required me to rewire the schematic, add some more components and completely redesign the whole PCB.

On my last filament dryer, the printer didn't have enough strength (it did but it looked very risky) for actually pulling the filament from inside the dryer, probably because there was too much friction and too many sharp angles. But anyways to fix this and make it work better I decided to reuse one of my stepper motors from the old bowden setup I don't use anymore.

The idea is to setup the stepper motor such that it basically pushes the filament out of the dryer but, that won't work very well on its own, so I will add a IR distance I2C sensor inside a small enclosure through which the filament wire will run through and basically, when the wire comes taunt because the printer has pulled some of it for printing, the MCU will detect the distance of the wire from the sensor increasing and will turn on the stepper to push the wire, until the wire bends downwards onto the face of the sensor and triggers it so the stepper stops.

Now, to obviously do that, I need to have someway to actually use the stepper, which means I need a stepper driver. More precisely I use the DRV8825, this quite overcomplicated the schematic design, despite me trying to keep it simple to reduce cost but nonetheless I added that in because I really want this automatic pushing mechanism. (And probably another I2C sensor of the same distance type can detect when the spool is empty as well and warn the user!!).

Apart from that I also realized I had made some mistakes with some I2C lines and forgot to even add a component. But now that is fixed and this version of the board should be ready to order now.

Also, in terms of stepper power, the driver is configured to let it use 1.5A max. Heat dissipation won't be a problem because it'll only run periodically and current shouldn't also be a problem because I can just add protections in code so that the heater turns off whenever the stepper is running to make sure the 4.7A limit isn't exceeded.

main_schematic3.png

pcb_no_zones_v2.png

pcb_front_v2.png

pcb_3d_v2.png

Tools: KiCad
Jan 14, 2026 4.0h
Adjusted the schematic so that only 3 MX switches are used (I do not need 8) and added an EC11 encoder instead.

Then I went and designed the whole PCB. I used normal traces for everything but I adjusted the power traces for the 5V and 3.3V to be slightly thicker. And I created fill regions and really thick traces (3mm) for the fan and heater power lines. I used a trace width calculator and got about ~3mm for the heater running at 6A (to be safe, im running at 4.7A), so the trace widths/fill areas should be fine. Then I made the ground plane on both sides and checked DRC (also making sure the ground plane is sufficiently thick for the return current from the heater).

Considering I'm also running 4.7A through those traces (max) I also did my best to keep them far away form any signal lines, because of the magnetic coupling that can be caused by high currents. This might not be a problem here but I'm making a more advanced flight controller that uses traces up to 8A+ so if it is a problem here then I will need to find a better solution, but hopefully they're far enough from everything else.

Here are some pictures:

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/CAD/main_schematic2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/CAD/pcb_3d_1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/CAD/pcb_3d_2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/CAD/pcb_back.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/CAD/pcb_front.png

Tools: KiCad
Jan 13, 2026 0.1h
Adding in a picture of the old filament dryer that I will redesign.

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/old_dryer.jpg
Jan 13, 2026 0.1h
Links to pictures with what I did on my last journal (i forgot):

https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/main_schematic.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/flex_heater_schematic.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/flex_heater_pcb2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/flex_heater_pcb1.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/bom2.png
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/bom1.png

Tools: Pictures
Jan 13, 2026 5.0h
The RP2040 Zero version was the cheapest so I decided to use that, it also has more GPIOs. In terms of power, I want to keep things as simple as possible (as little components as possible) so I am simply just using the K7805-500R3 to regulate my 19V from the adapter down to 5V for the RP2040 (also a module board that will be SMD). Then I have two MOSFETs (I was gonna use the IRL540Ns that I have but I decided against that and instead I'm using some SMD ones that have more reliable RVDS(on) resistances at 2.5V (lower than 3.3V) so would be better than my ones (part name in aliexpress images). The two MOSFETs will be for the flex heater and fans. Probably drivable by PWM too. I also added an XT60 connector so I don't have to solder my power supply to the PCB (Maybe I will use it for other things and a connector is just better). And I decided to use an OLED display of 128x64 resolution to give me a sharper image than a normal LCD, it will also look nicer and be more readable, still I2C though so perfectly mine with my RP2040, as I'm sure there are arduino libraries for it. And I also added the 8 MX Cherry switches I had left over from the macropad because they just look amazing already on my Klipper Console and they will look amazing here. I now have to design the actual main PCB.


However, I have already designed the flex heater PCB (I really want to get these parts ordered so they come on time). The flex heater is simply just a 500x40mm PCB with two power contacts at the end (JLCPCB will automatically route the power trace for their specialized flex heater order thing, all I have to do is provide them the voltage and resistance, plus other things). I have however split them into two separate PCBs (I am ordering 5 though, because I need the split in the middle of the design for the fan, so the resulting resistance is 2.2ohms, including the 5% tolerance, so that with two pieces I get 4.4ohms which brings me to around 80-90W at 19V, which is perfect for my adapter, which I can also easily bring down if needed through PWM. Apart from that I also added two NTC thermistors on each flex PCB, which I will also order (these, resulting four NTCs will help me to determine if the flex PCB is getting too hot). For the rest of the design I will be using a much more accurate SHT41 to measure temperature and humidity real-time and adjust accordingly.

Oh and also I will be using 5020 24V fans, I have a 5010 one but it has very little static pressure, and at 19V it will be worse, so hopefully 5020 ones will push a little bit more (fingers crossed). And I will also order some silica gel packets for even better drying, and add a container for the sachets too!!

Tools: KiCad PCB designing
Jan 13, 2026 0.5h
Before I do anything, even the design of the PCB heater, I need to figure out what sizes I should use for my filament rolls. My roll is 65mm wide and 200mm in diameter with a center hole of 50mm. Most rolls out there seem to be around 200mm, so to be safe, I'll design around 210-220mm. In terms of center hole width and depth however, I've seen some varying results from 50mm up to 70mm in the case of Tecbears filaments (something which i would like to buy and try soon). So, for that I would probably want to design generously in terms of width (probably about 60-70mm, depends once I do more research). However, for the arm that will hold the filament spool I will need to figure out a way to make it work for a range of sizes, because if I make it one size only, it may not fit some and it may sit awkwardly on others, completely negating the positive effect of having that arm on friction when pulling filament. I'm thinking something like an extension system/arm that can widen and can be set by the user so their filament roll sits nicely.

Besides all that I also need to pay attention to the filament I use to actually print the whole thing. PLA softens at 60C, which doesn't give me any options at all for raising the temperature to a decent value (higher temperature means better drying, which I would like to do with my newfound powerful 90W adapter). I will probably have to order some PETG as my printer doesn't have an enclosure.

Tools: Research
Jan 13, 2026 3.0h
Thought up of a basic design. I had the idea of tilting it to the side (there are two rolls of filament meant to held in the thing and I kind of just tilted them at about 30 degrees and I got a very cool shape) and I like it so I think I'll run with this.

I had some keyboard keys left over from the macropad I made from blueprint and I will also buy an LCD display and use it with I2C. In terms of an MCU to control everything I'll just also use the Seeed RP2040 as it has more than enough pins and I don't need anything fancy like an ESP32 for this. I will need MOSFET control though.

Then for the air recirculation, I will throw in some fans at proper angles and hope for the best. In the drawing on the bottom, the resulting airflow seems like it would be quite good considering hot air accumulates on the top, heater is on the bottom, and fan pushes are around to mix it.

And for the actual heating part I want to use a flex PCB heater as that is the easiest to design around and can cover the most area. I have a spare 90W laptop power supply at 19V, which should be perfect. 90W is more than enough (50-70W is good) but having the extra heating power will be good, (the previous filament heater didn't go past 30 Celsius 😭)

Here is a picture of my design and feature workings:
https://github.com/CircuitGuy943/CinderV2-Filament-Dryer/blob/main/Pictures/design.jpg

Now I need to get the PCB and flex heater PCB sorted out with first to order them so they arrive on time before this program ends (hopefully)

Tools: Design?

# Lab 2 -  Part 2 -  Report

## Passive buzzer 
We reproduced the passive buzzer assembly already seen in lab 1.
We followed the instructions of "Lesson 9 : Passive buzzer "

Components used : 
- Passive buzzer
- Arduino Uno board
- Breadboard
- Jumper wires 
- USB cable 



Sketches : 


![](Buzzer_Sketch.png?raw=true)





![](Buzzer_Schematic.png?raw=true)





Photo of the assembly :



![](Photo_Buzzer.png?raw=true)





Once connecting all these components together and uploading the [code](Buzzer_Code.ino), we observed that when we input a value (on the Arduino console), the frequence of the sound emitted by the buzzer changes.







## LDR 
Here we will get to know the LDR component. We reproduced the assembly sketch given.

Components used : 
- LDR
- 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires 
- USB cable 



Sketches : 


![](LDR_Sketch.png?raw=true)





![](LDR_Schematic.png?raw=true)




Photo of the assembly :



![](Photo_LDR.png?raw=true)





Once connecting all these components together and uploading the [code](LDR_Code.ino), values were continuously being displayed on the Arduino console. These values, in ohm, collected by the LDR, depend on the lighting to which the LDR is exposed. We observed that when covering the LDR, for example with a finger, these values displayed on the consoles decrease because obviously, the lighting got reduced. When fully covering the LDR from the light, the values reached 0 ohm.


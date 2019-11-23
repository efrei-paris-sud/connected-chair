# Lab 3 - Part 2
## Experience with the ESP32 component 

We assembled all the required components as indicated on the following Fritzing sketches :

![](ESP32.png?raw=true)



![](Sketch_ESP32.png?raw=true)


We then uploaded a first [code1](Esp2.ino) into the ESP32 module and a second [code2](Arduino2.ino) into the Arduino Uno board.
The I2C protocol requires the use of two lines between two devices, one to send data (SCL) and a second one to receive (SDA). 
Here the ESP32 is the master component as it writes/sends data. Indeed, in code1, we can see the use of the command "Wire.beginTransmission" in the loop : ESP32 starts transmitting to the slave component that is the Arduino Uno board. On code2, we can see the use of the command "Wire.onReceive" which is a function to trigger when something is received.
  

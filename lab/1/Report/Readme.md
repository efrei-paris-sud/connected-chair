# Lab 1 - Report

## Lesson 1 : LED Blink

In this first lesson we will produce a basic Arduino assembly to turn on an LED light.

Components used :
- LED
- 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable 

We connected all these components as indicated on the following sketch and used this [code](LEDBlink.ino).

![](LEDBlink.png?raw=true)


## Lesson 5 : Fade 

In this lesson we will make an assembly in order to gradually fade the light emitted by the LED.

Components used :
- LED 
- 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable

We connected all these components as indicated on the following sketch and used this [code](Fade.ino).

![](Fade.png?raw=true)



## Lesson 10 : RGB LED 

In this lesson we will make an assembly using an RGB LED, to display multiple colour with only one LED.
Components used :
- RGB LED
- 3x 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable

We connected all these components as indicated on the following sketch and used this [code](RGB_LED.ino).

![](RGB_LED.png?raw=true)



## Lesson 10 : Analog Input

In this lesson we will make an assembly to control the LED light brightness with a potentiometer. 

Components used :
- 10 kilo ohm potentiometer
- LED
- 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable

We connected the potentiometer as indicated on the following sketch (for the LED connections, same as lesson 1) and used this [code](Analog_Input.ino).

![](Analog_Input.png?raw=true)


Result : As we turn the button of the potentiometer, the brightness of the LED light, increases or decreases.




## Lesson 6 : Button 

In this lesson we will get to know the use and funtioning of the button component.

Components used :
- Button
- 10 kilo ohm resistor
- LED light
- 220 ohm resistor
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable

We connected the button as indicated on the following sketch, (for the LED connections, same as lesson 1) and used this [code](Button.ino)

![](Button.png?raw=true)

 
 Result : When pressing on the button the LED turns off. We then changed to code so that when the button is pressed, the light turns on.
 Thus, we changed this initial part of the code : 
  ```C
    if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
  ```
  
  to these lines : 
  
 ```C
    if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
  }
  ```
  
  
  
  
## Lesson 9 : Buzzer

In this lesson we will get to know the use and functioning of the buzzer element. 

Components used :
- Active buzzer
- Arduino Uno board
- Breadboard
- Jumper wires
- USB cable

We connected all these components as indicated on the following sketch and used this [code](Buzzer.ino).

![](Buzzer.png?raw=true)



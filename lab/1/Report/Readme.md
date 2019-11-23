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




Regarding the code used, the LED plugged in the Arduino card is recognised thanks to the first line in the code.
The digitalWrite() command in the infinite loop enables to LED to blink without interruption with a delay, also indicated in the code.



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




Descrisption of the code used; 
We connect the led to the pin 5. First, we initialize the value of the brightness. In the loop we set brightness and write command so brightness decrease with time and increase again  when it reach the lower point. 
This is why the brightness of the loop keep increasing and decreasing every 30 milliseconds.




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



Description of the code used :
The three pins LED plugged on the card is recognised thanks to the first three lines.
The loop() enables to display, first, the red color then after a delay time, the green color is displayed then after another delay, the blue color appears etc.


## Lesson 4 : Analog Input

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
  
  
Description of the code used :
The LED as well as the button plugged on the card are recognised thanks to the first two lines in the code.
The button is initialised so that when it is pressed for the first time, the LED turns on and when pressed again, the LED turns off.
The loop() enables the LED to turn on or off when the is pressed, according to its state (if() statement).
  
  
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




Description of the code :
We connect the buzzer to pin 5 and to GND pin , then in the code, in the loop section , we define the duration and intensity of the sound emitted by the buzzer thanks to the command "tone()". The buzzer then emits a sound continuously. 



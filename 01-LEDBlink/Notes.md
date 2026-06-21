# Arduino Board LED Blink

## What happened in this lesson?
In my first lesson, I learnt how to turn the L LED connected to Pin 13 on and off, making it blink on different intervals.

## What I did:
1. I connected the Arduino board to my laptop using an USB cable.
### I wrote a code that:
3. Set pin 13 as an output (pinMode(13,OUTPUT)) 
4. Turn the LED on (digitalWrite(13,HIGH))
5. Wait for n second or n x 1000 milliseconds as written in code (delay(n x 1000)) (Note: n is a variable not include in coding)
6. Turn the LED off (digitalWrite(13,LOW))
7. Wait for n second
8. Repeats forever

## What I learned:
* void setup() is the section of code that will be read once, used as a setup for the code that comes in the loop.
* void loop() is the section that repeats the code written.
* pinMode("pin", "OUTPUT or INPUT") tells the arduino what pin is being used and what function it will have
* digitalWrite("pin","value") tells the specific pin to turn the power on or off (HIGH or LOW respectively)

## Resources I used:
"Arduino Tutorial 1: Setting Up and Programming the Arduino for Absolute Beginners" by Paul McWhorter

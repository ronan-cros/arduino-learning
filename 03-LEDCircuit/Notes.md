In this third lesson, I learned to create a circuit using my arduino to blink a LED as many times as I want.

What I did:
1. I connected pin 12 to the breadboard using a wire
2. I connected the wire to a 330 Ohms resistor
3. I connected the resistor to a red LED, using the anode for current input and the cathode for current output
4. I connected the LED's cathode to the ground rail
5. I repeated the process for other LEDs, using a green LED for pin 11, and a blue LED for pin 10
6. I then used a wire to connect the ground rail to the GND pin on my arduino
7. I ran the code

The code I used:
1. Set pin 12, 11, and 10 as an output
2. Loop the code 5 times to blink the red LED
3. Loop the code 10 times to blink the green LED
4. Loop the code 15 times to blink the blue LED
5. Repeat indefinitely

What I learned:
-The holes on the inner part of the breadboard are connected by columns (also called terminal strips)
-The holes on the outer part of the breadboard are connected by rows, also called power rails
-A resistor with around 200 Ohms must be used in a circuit using a LED
-Other pins with another number than pin 13 can be used as a voltage output (except pin 1 and 0)

Challenge I encountered:
-Writing the same line of code many times to repeat the same action wastes a lot of time, so I searched up a line that could loop the code to blink the LED a specific number of times 
(for (int i = 0; i < n; i++) {})

Something that caught my eye:
-When connecting the LED to a wire, the LED would turn on whenever my hand would accidentally touch the other end of the wire. 
Since current can only flow through a closed circuit, my body might have acted as a conductor. Although, the pin wasn't on and there was no voltage ouptut, which is strange.

Resources I used:

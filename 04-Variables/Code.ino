int redLED = 13;
int greenLED = 12;
int blueLED = 11;
int fast = 100;
int slow = 500;
int veryslow = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i < 5; i++) { //Blink the LED connected to pin 12 five times
  digitalWrite(redLED,HIGH);
  delay(fast);
  digitalWrite(redLED,LOW);
  delay(fast);
}
for(int i = 0; i < 10; i++) { //Blink the LED connected to pin 11 ten times
  digitalWrite(greenLED,HIGH);
  delay(slow);
  digitalWrite(greenLED,LOW);
  delay(slow);
}
for(int i = 0; i < 15; i++) { //Blink the LED connected to pin 10 fifteen times
  digitalWrite(blueLED,HIGH);
  delay(veryslow);
  digitalWrite(blueLED,LOW);
  delay(veryslow);
}
}

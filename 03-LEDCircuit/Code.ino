void setup() {
  // put your setup code here, to run once:
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0; i < 5; i++) { //Blink the LED connected to pin 12 five times
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(12,LOW);
  delay(500);
}
for(int i = 0; i < 10; i++) { //Blink the LED connected to pin 11 ten times
  digitalWrite(11,HIGH);
  delay(500);
  digitalWrite(11,LOW);
  delay(500);
}
for(int i = 0; i < 15; i++) { //Blink the LED connected to pin 10 fifteen times
  digitalWrite(10,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  delay(500);
}
}

void setup() {
  pinMode(12,OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  delay(500);
} 

// since there are only limited GND pins on the uno r3, what you can do is connect one of the GND on the negative bus using a wire. from there on, connect each resistor with negative bus instead of GND

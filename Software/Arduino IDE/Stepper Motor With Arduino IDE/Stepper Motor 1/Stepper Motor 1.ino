void setup() {
  // initialize digital pin 13 as an output.
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW); 
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  delay(10);
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH); 
  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH); 
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH);
  delay(10);             
}

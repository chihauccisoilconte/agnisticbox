// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin GPIO25 as an output.
  pinMode(25, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(25, HIGH); // turn the LED on
  delay(500);             // wait for 500 milliseconds
  digitalWrite(25, LOW);  // turn the LED off
  delay(500);             // wait for 500 milliseconds
}

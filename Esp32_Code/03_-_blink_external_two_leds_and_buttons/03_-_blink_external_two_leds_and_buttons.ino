// the setup function runs once when you press reset or power the board

//declare buttons pins
const int btnPin = 13;
const int btnPin2 = 15;

//define button 1 states
int lastBtnState;
int btnState;

//define button 2 states
int lastBtnState2;
int btnState2;



void setup() {
  // initialize digital pin GPIO25 and GPIO33 as an output for LEDs.

  pinMode(25, OUTPUT);
  pinMode(33, OUTPUT);

  //initializa button pins
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(btnPin2, INPUT_PULLUP);


}

// the loop function runs over and over again forever
void loop() {

  //check on button 1 state
  lastBtnState = btnState;
  btnState = digitalRead(btnPin);

  //check on button 2 state
  lastBtnState2 = btnState2;
  btnState2 = digitalRead(btnPin2);

//if button 1 is pressed light LED1!

  if (lastBtnState == 1 && btnState == 0) {
    digitalWrite(25, HIGH); // turn the LED on
  }
  else if (lastBtnState == 0 && btnState == 1) {
    digitalWrite(25, LOW);  // turn the LED off
  }

//if button 2 is pressed light LED2!

  if (lastBtnState2 == 1 && btnState2 == 0) {
    digitalWrite(33, HIGH); // turn the LED on
  }
  else if (lastBtnState2 == 0 && btnState2 == 1) {
    digitalWrite(33, LOW);  // turn the LED off
  }

}

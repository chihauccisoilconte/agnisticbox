
#define POTENTIOMETER_PIN  35  // ESP32 pin GPIO36 (ADC0) connected to Potentiometer pin
#define LED_PIN            25  // ESP32 pin GPIO21 connected to LED's pin

#define POTENTIOMETER_PIN2  34  // ESP32 pin GPIO36 (ADC0) connected to Potentiometer pin
#define LED_PIN2            33  // ESP32 pin GPIO21 connected to LED's pin

//declare buttons pins
const int btnPin = 13;
const int btnPin2 = 15;

//define button 1 states
int lastBtnState;
int btnState;

//define button 2 states
int lastBtnState2;
int btnState2;


// the setup routine runs once when you press reset:
void setup() {

  // declare LED pin to be an output:
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);


  //initializa button pins
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(btnPin2, INPUT_PULLUP);


}

// the loop routine runs over and over again forever:
void loop() {
  // reads the input on analog pin A0 (value between 0 and 4095)
  int analogValue = analogRead(POTENTIOMETER_PIN);
  int analogValue2 = analogRead(POTENTIOMETER_PIN2);



  // scales it to brightness (value between 0 and 255)
  int brightness = map(analogValue, 0, 4095, 0, 255);
  int brightness2 = map(analogValue2, 0, 4095, 0, 255);


  // sets the brightness LED that connects to  pin 3
  analogWrite(LED_PIN, brightness);
  analogWrite(LED_PIN2, brightness2);


  delay(100);
}

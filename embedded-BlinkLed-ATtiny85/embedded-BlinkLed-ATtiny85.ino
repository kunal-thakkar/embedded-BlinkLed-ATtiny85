// Select Digispark(Default - 16.5mhz) board and upload below program

byte OUTPUT_PIN = 1;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(OUTPUT_PIN, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(OUTPUT_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(OUTPUT_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}

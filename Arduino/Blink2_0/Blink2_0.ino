const int LED_PIN = 8;

void setup() {                
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(LED_PIN, OUTPUT);     
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // set the LED on
  delay(50);              // wait for a second
  digitalWrite(LED_PIN, LOW);    // set the LED off
  delay(600);              // wait for a second
  digitalWrite(LED_PIN, HIGH);    // set the LED off
  delay(1000);
  digitalWrite(LED_PIN, LOW);    // set the LED off
  delay(300);
}

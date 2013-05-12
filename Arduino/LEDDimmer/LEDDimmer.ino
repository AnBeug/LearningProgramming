/**
 * Lab 2: Variables
 *
 * This sketch reads input from a potentiometer. The brightness
 * of the LED is set based on the input from the potentiometer.
 * 
 * The potentiometer will return a value fom 0 to 1024.
 * The LED brightness ranges from 0 to 255.
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */

const int LED_PIN = 9;     // The output pin the LED is connected to
const int POT_PIN = 5;     // The input pin from the potentiometer
const int LOOP_DELAY = 100;

// TO DO
// Declare two variables -- one to hold the 
// value read in from the potentiometer, the other
// to hold the brightness value based on the input
// from the potentiometer.
// For example (but choose your own name): 
// int x = 0;
int sensorValue = 0;
int brightness = 0;

/* This function performs the setup -- it is called
 * only once at the very beginning. */
void setup() {
  Serial.begin(9600);
  // Set up the pins
  pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

/* This function is called repeatedly, after the call
 * to the "setup" function. */
void loop() {
  // TO DO
  // Read the input from the sensor and assign it to 
  // a variable. Use the variable name you declared above.
  sensorValue = analogRead(POT_PIN);
  Serial.println(sensorValue, DEC); // output what we just read in
  
  // TO DO
  // Calculate the brightness based on the input from the potentiometer.
  // Use the same variable you assigned the input from the potentiometer to.
  // For example:
  // 

  Serial.println(brightness, DEC); // output what we just read in
  
  // wait a short time to see the dimming effect    
  delay(LOOP_DELAY);  
}


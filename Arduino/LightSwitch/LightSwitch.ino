/**
 * Lab 3: Conditionals
 *
 * This sketch lights up a light when the button is pushed.
 * Follow the directions in the comments below.
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */

// TO DO
// Set up your variables here
// See Lab 1/2 for reference

const int LOOP_DURATION = 20;

void setup() {
  // TO DO
  // Set pin modes -- either INPUT (for pushbutton)
  // or OUTPUT (for LED)

  // Don't forget to start serial mode
  Serial.begin(9600);
}

void loop() {
  // TO DO
  // Read the input from the sensor and assign it to a variable
  // HIGH means on, LOW means off. See the lab writeup for how to 
  // read the state of the button.

  // TO DO
  // These lines will write to the serial monitor
  // You can open it under the Tools -> Serial Monitor
  // menu item
  Serial.print("Sensor value = ");
  Serial.println(x); // TO DO substitute your variable for x

  // Set the LED state based on the input
  // from the sensor

 
  // We want a short loop delay so that
  // the light turns on quickly after the button
  // is pressed
  delay(LOOP_DURATION);
}



/**
 * Lab 4: Iteration
 *
 * This sketch outputs to a Piezo buzzer. You will create a
 * song by looping through the array of notes, playing one
 * at a time.
 * 
 * Examples of arrays and loops are in the comments.
 * Create your own tune based on the notes in PiezoNotes.h. 
 *
 * asbeug@calpoly.edu
 * Fall 2011 - Spring 2012
 */

// Include the file in the other tab that contains
// constant variables for all the notes.
#include "./PiezoNotes.h";

// TO DO
// Define variables for the pin, one for the delay
// at the end of the loop, one for the number of milliseconds
// to play the note, and the number of milliseconds to wait before
// playing the next song. You may have to play around with the
// timing to get the notes playing nicely.

// Use an array like this for your notes.
// Look at PiezoNotes.h file for the different notes.
// Pick your own notes and use at least 5.
int song1[] = {NOTE_B0, NOTE_D7, NOTE_E4}; 
// We can automatically calculate the size of our array so that
// we know how many notes we are trying to play.
int numNotes = sizeof(song1); 

void setup() {
  // TO DO 
  // Setup the buzz pin for output.
}

void loop() {
  // TO DO
  // Loop through each note in your list and play it
  // for a given amount of time. If the song is playing
  // to quickly, try adding a delay in the loop.
  
  // See the lab write up for how to loop through the array
  // and make the speaker buzz for each note.
}

// This function actually makes the speaker buzz. You can
// call it like:
//      buzz(aNote,someMilliSecs);
void buzz(int my_note, long my_LOOP_DELAY) {
  tone(BUZZ_PIN, my_note, my_LOOP_DELAY); 
}



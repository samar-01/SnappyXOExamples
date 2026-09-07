// This project aims to educate the user on how to connect the motors of a 2WD
// car and program it through Arduino.
#include <SnappyXOShield.h>

void setup() {
	// Initialize motors
	initMotors();

	// Begin serial communication
	Serial.begin(9600);
}

// This is the main loop the code will follow
void loop() {
	forward();
	delay(1000);
	turnRight();
	delay(1000);
	turnLeft();
	delay(1000);
	reverse();
	delay(1000);
}

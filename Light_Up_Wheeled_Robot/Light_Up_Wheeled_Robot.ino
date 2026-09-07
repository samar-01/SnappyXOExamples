// This code lights up two LEDs while a two wheel drive robot car moves.
#include <SnappyXOShield.h>

// Pin Definitions
int PIN_LED_GREEN = 3;
int PIN_LED_RED = 2;

void setup() {
	// Define pinModes
	pinMode(PIN_LED_GREEN, OUTPUT);
	pinMode(PIN_LED_RED, OUTPUT);

	// Begin serial communication
	Serial.begin(9600);

	// Initialize motors
	initMotors(false, false);
}

void loop() {
	digitalWrite(PIN_LED_GREEN, HIGH);	// green for forward
	forward();
	delay(1000);

	digitalWrite(PIN_LED_GREEN, LOW);  // red for stoping
	digitalWrite(PIN_LED_RED, HIGH);
	pause();
	delay(1000);

	digitalWrite(PIN_LED_RED, LOW);
	turnLeft();
	delay(1000);
	turnRight();
	delay(1000);

	reverse();	// flashing green for reverse
	for (int i = 0; i <= 1000; i += 500) {
		digitalWrite(PIN_LED_GREEN, HIGH);
		delay(250);
		digitalWrite(PIN_LED_GREEN, LOW);
		delay(250);
	}
}

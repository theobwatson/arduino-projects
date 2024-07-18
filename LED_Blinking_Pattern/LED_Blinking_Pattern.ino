const int ledPins[] = {2, 3, 4}; // Pins connected to the LEDs

void setup() {
  // Initialize the digital pins as outputs
  for (int i = 0; i < 3; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPins[i], HIGH);  // Turn the LED on
    delay(500);                      // Wait for half a second
    digitalWrite(ledPins[i], LOW);   // Turn the LED off
    delay(500);                      // Wait for half a second
  }

  for (int i = 2; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);  // Turn the LED on
    delay(500);                      // Wait for half a second
    digitalWrite(ledPins[i], LOW);   // Turn the LED off
    delay(500);                      // Wait for half a second
  }
}

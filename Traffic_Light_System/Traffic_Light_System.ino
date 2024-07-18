const int redLight = 2;
const int yellowLight = 3;
const int greenLight = 4;

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  digitalWrite(greenLight, HIGH);
  delay(5000);  // Green light for 5 seconds

  digitalWrite(greenLight, LOW);
  digitalWrite(yellowLight, HIGH);
  delay(2000);  // Yellow light for 2 seconds

  digitalWrite(yellowLight, LOW);
  digitalWrite(redLight, HIGH);
  delay(5000);  // Red light for 5 seconds

  digitalWrite(redLight, LOW);
}

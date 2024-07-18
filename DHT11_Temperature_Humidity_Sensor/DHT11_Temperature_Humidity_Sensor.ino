#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN 2      // Pin where the DHT11 is connected
#define DHTTYPE DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);  // Set up the LCD's number of columns and rows
  lcd.print("Temp & Humidity");
}

void loop() {
  delay(2000);  // Wait a few seconds between measurements

  // Reading temperature or humidity takes about 250 milliseconds
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Check if any reads failed and exit early
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print to the LCD
  lcd.setCursor(0, 1);
  lcd.print("T: ");
  lcd.print(t);
  lcd.print(" C ");
  lcd.print("H: ");
  lcd.print(h);
  lcd.print(" %");

  // Print to the Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
}

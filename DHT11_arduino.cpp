#include "DHT.h"         // Include the DHT sensor library

#define DHTPIN 3         // Pin where the DHT11 is connected
#define DHTTYPE DHT11    // Define sensor type as DHT11

DHT dht(DHTPIN, DHTTYPE);  // Create DHT object

void setup() {
  Serial.begin(9600);     // Start serial communication
  dht.begin();            // Initialize the DHT sensor
  Serial.println("DHT11 Sensor Reading Started...");
}

void loop() {
  // Reading temperature and humidity values
  float humidity = dht.readHumidity();       // Read humidity
  float temperature = dht.readTemperature(); // Read temperature in °C

  // Check if reading failed
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print values to Serial Monitor
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %  |  ");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(2000); // Wait 2 seconds before next reading
}

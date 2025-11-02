int irPin = D5;      // IR sensor output pin
int buzzPin = D6;    // Buzzer pin

void setup() {
  pinMode(irPin, INPUT);     // IR sensor input
  pinMode(buzzPin, OUTPUT);  // Buzzer output
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(irPin) == HIGH) {    // Object detected (your sensor gives HIGH)
    digitalWrite(buzzPin, HIGH);       // Turn buzzer ON
    Serial.println("Object Detected!");
  } 
  else {                               // No object
    digitalWrite(buzzPin, LOW);        // Turn buzzer OFF
    Serial.println("No Object");
  }

  delay(500);  // Small delay for stable readings
}

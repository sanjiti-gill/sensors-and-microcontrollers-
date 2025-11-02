int irPin = 7;      // IR sensor output pin
int buzzPin = 8;    // Buzzer pin

void setup() {
  pinMode(irPin, INPUT);    // IR sensor pin as input
  pinMode(buzzPin, OUTPUT); // Buzzer pin as output
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(irPin) == HIGH) {   // Object detected (HIGH)
    digitalWrite(buzzPin, HIGH);      // Turn buzzer ON
    Serial.println("Object Detected!");
  } 
  else {                              // No object (LOW)
    digitalWrite(buzzPin, LOW);       // Turn buzzer OFF
    Serial.println("No Object");
  }

  delay(500);  // Stability delay
}

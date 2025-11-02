int pirPin = D5;     // PIR sensor output pin
int buzzPin = D6;    // Buzzer pin

void setup() {
  pinMode(pirPin, INPUT);     // PIR sensor as input
  pinMode(buzzPin, OUTPUT);   // Buzzer as output
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(pirPin) == HIGH) {   // Motion detected
    digitalWrite(buzzPin, HIGH);       // Turn buzzer ON
    Serial.println("Motion Detected!");
  } 
  else {                               // No motion
    digitalWrite(buzzPin, LOW);        // Turn buzzer OFF
    Serial.println("No Motion");
  }

  delay(500);  // Delay for stable reading
}

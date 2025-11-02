void setup() {
  pinMode(2, INPUT);   // PIR sensor connected to pin 2
  pinMode(4, OUTPUT);  // Buzzer connected to pin 4
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == HIGH) {   // If motion detected
    digitalWrite(4, HIGH);        // Turn buzzer ON
    Serial.println("Motion Detected!");
  } 
  else {                          // No motion
    digitalWrite(4, LOW);         // Turn buzzer OFF
    Serial.println("No Motion");
  }
  delay(500);                     // Small delay for stability
}

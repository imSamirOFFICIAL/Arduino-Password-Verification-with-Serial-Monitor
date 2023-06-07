const String password = "samir";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');

    if (input == password) {
      Serial.println("Thank you for logging in");
    } else {
      Serial.println("No access");
    }
  }
}
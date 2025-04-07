const int lm35Pin = A0;
const int fanPin = 9;

void setup() {
  pinMode(fanPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int analogValue = analogRead(lm35Pin);
  float tempC = analogValue * (5.0 / 1023.0) * 100;

  Serial.print("Temp: ");
  Serial.print(tempC);
  Serial.println(" °C");

  if (tempC < 25) {
    analogWrite(fanPin, 0); // Fan OFF
  } else if (tempC >= 25 && tempC <= 30) {
    analogWrite(fanPin, 128); // Medium speed
  } else {
    analogWrite(fanPin, 255); // Full speed
  }

  delay(1000); // 1 second delay
}

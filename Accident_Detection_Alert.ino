int sensorPin = A0;
int led = 7;
int buzzer = 8;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);
  Serial.println(value);

  if (value > 600) {   // Threshold (adjust after testing)
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(200);
}

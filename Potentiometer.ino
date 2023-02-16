int potPin = A0;
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potVal = analogRead(potPin);
  int ledVal = map(potVal, 0, 1023, 0, 255);
  analogWrite(ledPin, ledVal);
}

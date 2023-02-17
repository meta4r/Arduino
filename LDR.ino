const int LDR_PIN = A0;
const int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  int ldr_value = analogRead(LDR_PIN);
  Serial.print("LDR value: ");
  Serial.println(ldr_value);
  if (ldr_value > 500) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  delay(1000);
}

int red = 12;
int yellow = 11;
int green = 10;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(red, LOW);
  
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  
  }

int in1 = 9;
int in2 = 10;
int pwm = 6;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(pwm, OUTPUT);
}

void loop() {
	
  analogWrite(pwm, 150);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(2000);
  
  analogWrite(pwm, 0);
  delay(1000);
  
  analogWrite(pwm, 200);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(2000);
  
  analogWrite(pwm, 0);
  delay(1000);
}

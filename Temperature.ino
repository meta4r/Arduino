#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int tempPin = 0;

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  float tempC = analogRead(tempPin) * 0.00488; //convert to voltage
  tempC = (tempC - 0.5) * 100.0; //convert to degrees C
  
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print(" C");
  
  delay(1000);
}

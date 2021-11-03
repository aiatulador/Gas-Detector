#include<LiquidCrystal.h>

LiquidCrystal lcd(12 , 11 , 5 ,4 ,3 ,2);
int Gas = 9;
int redLed = 7;
int greenLed = 6;

void setup() {

pinMode(Gas , INPUT);
pinMode(13,OUTPUT); 
  
}

void loop() {

  if(digitalRead(Gas) == HIGH){
    lcd.setCursor(0,0);
    lcd.print("Gas Detected");
    digitalWrite(7 , HIGH);
    digitalWrite(6, LOW);
    digitalWrite(13, HIGH);
    tone( 13, 4000, 600);
    tone( 13, 2000, 600);
  }
else{
  lcd.setCursor(0,0);
  lcd.print("No Gas Detected ");
  digitalWrite(6, HIGH);
  digitalWrite(7 ,LOW);
  digitalWrite(13, LOW);
}
delay(500);
lcd.clear();

}

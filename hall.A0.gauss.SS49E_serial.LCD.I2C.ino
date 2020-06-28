/*
GaussPlot βασισμένο στο arduining.com/2012/07/17/arduino-hall-effect-sensor-gaussmeter/ 
και τροποποιημένο για αισθητήρα SS49Ε και LCD I2C, επιπλέον της σειριακής.
*/
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR 0x27
#define Rs_pin 0
#define Rw_pin 1
#define En_pin 2
#define BACKLIGHT_PIN 3
#define D4_pin 4
#define D5_pin 5
#define D6_pin 6
#define D7_pin 7
LiquidCrystal_I2C lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

#define XRANGE  50
int x,gss;
void setup(){
  Serial.begin(9600);
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
  lcd.begin(16,2);
}

void loop(){
  int aValue =analogRead(0);
  x = map(aValue, 0, 1023, 0, XRANGE);
  gss = map(aValue, 205, 810, -1000, 1000);
  Serial.print("|"); 
  for (int i=0;i<x;i++){
    if(i==XRANGE/2-1)Serial.print("|");
    else Serial.print("-");
  }
  Serial.print("O");
  for (int i=x+1;i<XRANGE;i++){
    if(i==XRANGE/2-1)Serial.print("|");
    else Serial.print("-");
  }
  Serial.print("|");
  Serial.print(gss);
  Serial.println("Gauss");
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Gauss: ");
  lcd.print(gss);
  
  delay(100);
}

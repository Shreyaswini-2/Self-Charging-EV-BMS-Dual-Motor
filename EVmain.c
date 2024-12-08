#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
#include <OneWire.h>
#include <DallasTemperature.h>
#define DS18B20 15
OneWire ourWire(DS18B20);
DallasTemperature sensor(&ourWire);
int P_relay = 18;
int S_relay = 17;
int T_select = 11;
int B_low_SW = 10;
int rev_relay = 8;
int spd_relay = 9;
int T_Sens = A1;
int V_Sens = A0;
void setup() {
lcd.begin(16, 2);
Serial.begin(9600);
pinMode(P_relay, OUTPUT);
pinMode(S_relay, OUTPUT);
pinMode(rev_relay, OUTPUT);
pinMode(spd_relay, OUTPUT);
pinMode(T_Sens, INPUT);
pinMode(V_Sens, INPUT);
pinMode(B_low_SW, INPUT);
pinMode(T_select, INPUT);
sensor.begin();
delay(1000);
digitalWrite(spd_relay, HIGH);
}
void loop() {
int b = analogRead(V_Sens); 
b = b/50; // ADC to voltage calibration
int bb =map(b, 0, 12, 0, 100); // mapping voltage to %
boolean bt = digitalRead(B_low_SW);
 if(bt == LOW){
 bb = bb - 60;
 }
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Temperature = ");
sensor.requestTemperatures(); 
lcd.print(sensor.getTempCByIndex(0));
lcd.print(" C");
lcd.setCursor(0,1);
lcd.print("Voltage = ");
lcd.print(bb);
lcd.print(" %");
boolean tq = digitalRead(T_select);
 if(tq == 0){
 digitalWrite(spd_relay, HIGH);
 }else{
 digitalWrite(spd_relay, LOW);
 }
 if(bb < 50){
 digitalWrite(P_relay, LOW);
 digitalWrite(rev_relay, HIGH);
 digitalWrite(S_relay, HIGH);
 
 }else{
 digitalWrite(P_relay, HIGH);
 digitalWrite(rev_relay, LOW);
 digitalWrite(S_relay, LOW);
 }
 delay(2000);
 
}
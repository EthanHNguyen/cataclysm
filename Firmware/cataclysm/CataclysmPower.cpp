#include "CataclysmPower.h"

const uint8_t chrgPin = 27;
const uint8_t battPin = A4;
const uint8_t gpspwrPin = 2;
const uint16_t vdd = 3300 ;
const uint16_t adcResolution = 1023;

CataclysmPower::CataclysmPower()
{ 
}
  
void CataclysmPower::begin()
{
  pinMode(chrgPin, INPUT);
  pinMode(gpspwrPin, OUTPUT);
}

//Returns whether or not the battery is charging
bool CataclysmPower::isCharging()
{
  return !digitalRead(chrgPin); //Return 1 if charging, 0 if not charging
}


//Returns the voltage of the battery.
uint16_t CataclysmPower::getBatteryVoltage()
{
  uint16_t val = analogRead(battPin); //10-bit ADC, will return a number between 0 (0V) and 1023(3.3V)
  uint16_t voltage = vdd*(val/(float)adcResolution);

  return 2*voltage;
}

void CataclysmPower::enableGPS()
{
  digitalWrite(gpspwrPin, HIGH); //enables regulator, turning ON GPS circuit
}
void CataclysmPower::disableGPS()
{
  digitalWrite(gpspwrPin, LOW); //disables regulator, turning OFF GPS circuit
}

void CataclysmPower::enableMP3()
{
  
}
void CataclysmPower::disableMP3()
{
  
}

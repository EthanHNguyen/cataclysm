#ifndef cataclysm_power
#define catacylsm_power

#include <Arduino.h>

class catacylsm_power
{
private:

public:
  const uint8_t chrgPin = 27;
  const uint8_t BattPin = A4;
  const uint16_t VDD = 3300;
  const uint16_t adcResolution = 1023;
  catacylsm_power::catacylsm_power()
    {
      }
    
    // Returns whether or not the battery is charging
    void catacylsm_power::begin()
    {
      pingMode(chrgPin, INPUT);
    }
    
    bool catacylsm_power::isCharging()
    {
      return !digitalRead(chrgPinj); //return 0 if charging, 1 if not charging
    }
    uint16_t catacylsm_power::getBatteryVoltage()
    {
     uint8_t val = analogRead(battPin); //10-bit ADC, will return a number beween 0 (0V) and 1023 (3.3 V)
     uint8_t voltage = VDD*(val/float(adcResolution));

     return 2*voltage;
    }
    
};

#endif
 

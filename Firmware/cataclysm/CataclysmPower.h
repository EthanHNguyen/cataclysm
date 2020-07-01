#ifndef CataclysmPower_h
#define CataclysmPower_h

#include <Arduino.h>

class CataclysmPower
{
private:

public:

  CataclysmPower();
  
  void begin();
  bool isCharging();
  uint16_t getBatteryVoltage();

  void enableGPS();
  void disableGPS();

  void enableMP3();
  void disableMP3();
};

#endif
 

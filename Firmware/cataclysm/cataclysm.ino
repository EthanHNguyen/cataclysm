#include "CataclysmPower.h"

CataclysmPower pwr;


void setup() 
{
  pwr.begin();
}

void loop()
{
  pwr.isCharging();
  pwr.getBatteryVoltage();

  // print this information to my watch screen
}

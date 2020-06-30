#ifndef cataclysm_power
#define catacylsm_power

#include <Arduino.h>

class catacylsm_power
{
private:
public:
    catacylsm_power();
    
    void begin();
    
    bool isCharging(); 
    uint16_t getBatteryVoltage();
    
    void enableGPS();
    void disableGPS();
    
};

#endif
 

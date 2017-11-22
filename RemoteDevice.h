#ifndef RemoteDevice_h
#define RemoteDevice_h
#include <Arduino.h>

class RemoteDevice {
public:
    RemoteDevice();
    void send(float acceleration);
    String receive();
private:
}

#endif
#include <RemoteDevice.h>
#include <Arduino.h>

RemoteDevice::RemoteDevice() {

}

void RemoteDevice::send(int acceleration) {
    String command = String(acceleration);
    Serial.println(command);
}

String RemoteDevice::receive() {
    if(Serial.available() <= 0) {
        return "Connection error";

    } else {
        String data = Serial.readString();
        return data;
    }
}
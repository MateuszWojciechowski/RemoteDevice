#include <RemoteDevice.h>
#include <Arduino.h>

RemoteDevice::RemoteDevice() {

}

void RemoteDevice::send(float acceleration) {
    String command = String(acceleration);
    Serial.println(command);
}

String RemoteDevice::receive() {
    if(Serial.available() <= 0) {
        return "Nothing to receive";

    } else {
        String data = Serial.readString();
        return data;
    }
}
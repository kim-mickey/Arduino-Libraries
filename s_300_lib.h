#ifndef S_300_LIB_H
#define S_300_LIB_H

#include <Arduino.h>
#include <HardwareSerial.h>
#include <Wire.h>
#include <stdint.h>

#define SLAVE_ADDRESS 0x31
#define READ_ADDRESS 0x52

void sensor_setup(int Rate);
int sensor_data(int dataArr[]);



#endif
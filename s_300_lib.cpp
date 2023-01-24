#include "s_300_lib.h"

void sensor_setup(int rate){
  Wire.begin();
  Serial.begin(rate);
}

int sensor_data(int dataArr[]){

  Wire.beginTransmission(SLAVE_ADDRESS);

  Wire.write(READ_ADDRESS); // Write command
  if (Wire.endTransmission() != 0) { // Check acknowledge
    Serial.println("Data not found");
    // Handle error here
  }


  Wire.requestFrom(SLAVE_ADDRESS, 7); // Read 7 bytes

  int counter = 0;

  while (Wire.available()) {
    byte data = Wire.read();
    
    // Serial.println(data);
    dataArr[counter] = data;
    counter += 1;
    delay(1); // Delay for reading each byte
    Wire.write(1); // Send acknowledge
    
  }
  return dataArr[2];
}
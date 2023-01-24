#include <s_300_lib.h>

int array[6];     // setup a 7-sized array to store values read by the data

void setup() {
  // put your setup code here, to run once:
  sensor_setup(9600);   //setup the baud_rate that is need by the serial monitor

}

void loop() {
  // put your main code here, to run repeatedly:

  int info = sensor_data(array);  // createa variable to store the data from the sensor

  // display the data from the sensor to serial monitor
    
  Serial.print("Co2 Level: ");
  Serial.print(info);
  Serial.println(" ppm");

  delay(1000);  // display data after every 1 second

}

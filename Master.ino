// C++ code
//
#include <Wire.h>
#define LED_OFF 0
#define LED_ON 1

#define NUM_OF_SLAVE 3

void setup()
{
  Serial.begin(9600);
  Wire.begin();
}
void write2Slave(int slave_id, int order)
{
  if(slave_id==0)
  {
    for(int i=1;i<=NUM_OF_SLAVE;i++)
    {
      Wire.beginTransmission(i);
  	  Wire.write(order);
  	  Wire.endTransmission();
      delay(10);
    }
  }
  else
  {
  	Wire.beginTransmission(slave_id);
  	Wire.write(order);
  	Wire.endTransmission();
  }
}

int readFromSlave(int slave_id)
{
  Wire.requestFrom(slave_id, 1);
  if(Wire.available())
  {
    int sensor = (int)Wire.read();
    return sensor;
  }
}
void loop()
{
  //if(Serial.available()){
  write2Slave(2, LED_ON);
  delay(1000);
  write2Slave(1, LED_ON);
  delay(1000);
  write2Slave(0, LED_OFF);
  delay(1000);
  int sensor = readFromSlave(2);
  Serial.println(sensor);
  delay(1000);
}
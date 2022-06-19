// C++ code
//
#include <Wire.h>
static int id=1;
#define sensor_pin A0
void setup()
{
  pinMode(7, OUTPUT);
  Wire.begin(id);
  Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);
}

void loop()
{
  delay(500);
}
void receiveEvent(int howMany)
{
  if(Wire.available())
  {
    int order = (int)Wire.read();
    if(order==0){
      digitalWrite(7, LOW);
    }else if(order==1){
      digitalWrite(7, HIGH);
    }
  }
}
void requestEvent()
{
  Wire.write(analogRead(sensor_pin));
  delay(100);
}
  
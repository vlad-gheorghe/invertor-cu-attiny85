/*
This code was based on Swagatam SPWM code with changes made to remove errors. Use this code as you would use any other Swagatam’s works.
Atton Risk 2017 
https://www.homemade-circuits.com/arduino-spwm-generator-circuit/
*/
const int sPWMArray[] = {500,500,750,500,1250,500,2000,500,1250,500,750,500,500}; // This is the array with the SPWM values change them at will
const int sPWMArrayValues = 13; // You need this since C doesn’t give you the length of an Array 
// The pins

const int sPWMpin1 = PB1;// pin6 pwm
const int sPWMpin2 = PB0;//pin5 pwm

// The pin switches
bool sPWMpin1Status = true;
bool sPWMpin2Status = true;

void setup()
{
 pinMode(sPWMpin1, OUTPUT);
 pinMode(sPWMpin2, OUTPUT);
}

void loop()
{

 // Loop for pin 1
 for(int i(0); i != sPWMArrayValues; i++)
 {
  if(sPWMpin1Status)
  {
   digitalWrite(sPWMpin1, HIGH);
   delayMicroseconds(sPWMArray[i]);
   sPWMpin1Status = false;
  }
  else
  {
   digitalWrite(sPWMpin1, LOW);
   delayMicroseconds(sPWMArray[i]);
   sPWMpin1Status = true;
  }
 }
 
 // Loop for pin 2 
 for(int i(0); i != sPWMArrayValues; i++)
 {
  if(sPWMpin2Status)
  {
   digitalWrite(sPWMpin2, HIGH);
   delayMicroseconds(sPWMArray[i]);
   sPWMpin2Status = false;
  }
  else
  {
   digitalWrite(sPWMpin2, LOW);
   delayMicroseconds(sPWMArray[i]);
   sPWMpin2Status = true;
  }
 }
}


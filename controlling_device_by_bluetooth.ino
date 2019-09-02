/*
Code by: www.munphurid.com
M.Hashir

This is a code for Bluetooth controlled car

Hardware:
Is bought from www.munphurid.com
-Arduino UNO
-HC-05 Bluetooth Module
-4 male to female wires
-Buzzer

Connections:
Bluetooth module and Arduino
-Connect RX of Bluetooth module to pin 1 = TX of Arduino
-Connect TX of Bluetooth module to pin 0 = RX of Arduino
-Connect VCC of Bluetooth module to 5V of Arduino
-Connect GND of Bluetooth module to GND of Arduino

-Connect longer leg of buzzer to pin 11 of Arduino
-Connect shorter leg of buzzer to GND of Arduino

*/

int device = 11;
int device2 = 13;
void setup(void)
{
pinMode(device,OUTPUT);
  Serial.begin (9600);              //Do not edit this line

    while(!Serial.available());
 }


void loop(void) {

  int a=Serial.read();          //Receive data from Bluetooth module
switch(a){

case 'A':            //If this letter is received
digitalWrite(device,LOW);
delay(200);
break;

case 'B':            //If this letter is received
digitalWrite(device,HIGH);
delay(200);
break;

case 'C':            //If this letter is received
digitalWrite(device2,HIGH);
delay(200);
break;

case 'D':            //If this letter is received
digitalWrite(device2,LOW);
delay(200);
break;

}
}

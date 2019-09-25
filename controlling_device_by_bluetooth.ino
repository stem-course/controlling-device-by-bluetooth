/*
  Code by:
  M.Hashir

This is a code for controlling a device by bluetooth

  Hardware:
  Is bought from www.munphurid.com
  - Arduino UNO
  - HC-05 Bluetooth Module
  - 7 male to female wires
  - Relay module
  - Bulb and battery circuit

  Connections:
  Bluetooth module and Arduino
  -Connect RX of Bluetooth module to pin 1 = TX of Arduino
  -Connect TX of Bluetooth module to pin 0 = RX of Arduino
  -Connect VCC of Bluetooth module to 5V of Arduino
  -Connect GND of Bluetooth module to GND of Arduino

-	Connect VCC pin of relay module to pin 5V of the Arduino board.
-	Connect IN pin of relay module to pin 11 of the Arduino board.
-	Connect GND pin of relay module to pin GND of the Arduino board.

*/

int device = 11;          //Relay module is connected on this pin
int device2 = 13;         //Built-in LED on this pin can be controlled
void setup(void)
{
  pinMode(device, OUTPUT);
  Serial.begin (9600);              //Do not edit this line

  while (!Serial.available());
}


void loop(void) {

  int a = Serial.read();        //Receive data from Bluetooth module
  switch (a) {

    case 'A':            //If this letter is received
      digitalWrite(device, LOW);
      delay(200);
      break;

    case 'B':            //If this letter is received
      digitalWrite(device, HIGH);
      delay(200);
      break;

    case 'C':            //If this letter is received
      digitalWrite(device2, HIGH);
      delay(200);
      break;

    case 'D':            //If this letter is received
      digitalWrite(device2, LOW);
      delay(200);
      break;

  }
}

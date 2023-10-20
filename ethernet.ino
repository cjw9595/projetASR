#include <SPI.h>
#include <Ethernet.h>

byte Mac[] = 
{ 0xA8, 0x61, 0x0A, 0xAE, 0x70, 0x1D };

byte Ip[] =
{192,168,1,7};

byte Subnet[] =
{255.255.255.0};

EthernetServer MyServer(23333);


void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Leonardo only
  }
  Ethernet.begin(Mac, Ip);
  Ethernet.setSubnetMask(Subnet);
  Myserver.begin();
  Serial.println("IP adresse du server: ");
  Serial.println(Ethernet.localIP());


}

void loop() {
  
 

}

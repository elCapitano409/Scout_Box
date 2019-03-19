/*
 * WE MARS  
 * SCOUTR Web Server
 * 
 * Kyle Inzunza
 * 
 */

//include external libraries
#include <Math.h>

//include internal libraries
#include "WEBserver.h"

//declare timers
unsigned int uiCommunticationTimer;

void setup() {

  //start serial
  Serial.begin(115200);

  //start WEBserver
  setupWEbServer();

}

void loop() {
  // put your main code here, to run repeatedly:

}

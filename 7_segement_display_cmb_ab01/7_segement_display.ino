#include <TM1637.h>

int CLK = 9;
int DIO = 10;

TM1637 tm(CLK, DIO);

void setup() {
  tm.init();       
  tm.set(2);       
}

void loop() {
  // Example: Display "12:Ab"
  tm.display(0, 1);     
  tm.display(1, 2);     
  tm.point(1);         
  tm.display(2, 10);    
  tm.display(3, 11);    
}


#include <avr/io.h>
unsigned char displaySeg(unsigned char digit)
{
   switch(digit)
   {
      case 0:
      return 0b00000001;
      case 1:
      return 0b1001111;
      case 2:
      return 0b0010010;
      case 3:
      return 0b0000110;
      case 4:
      return 0b1001100;
      case 5:
      return 0b0100100;
      case 6:
      return 0b0100000;
      case 7:
      return 0b0001111;
      default:
      return 0;

   }
}

int main(){
   unsigned char inputs;
   DDRA=0xff;
   DDRB=0;
   while(1){
      inputs = PINB & 0b00000111;
      PORTA  = displaySeg(inputs);
   }
}

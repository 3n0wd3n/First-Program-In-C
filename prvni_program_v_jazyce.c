#include <stdio.h>
char number = 64;
int main(void){
   number = 64;
   printf("toto je cislo %d\n", number);
   printf("toto je znak %c\n", number);
   unsigned char bagr = 0xFF;
   //printf("d\n", -bagr); //je tam d protože budu tisknout celý číslo
   printf("%i -> %\n", bagr, bagr & 0x0F/ 2.)
   for (char i = 0; i < 20; i++){ // unsigned char(bez znaménka , nebo jen char se znaménkem)
      printf("cislo: %d\n", i);

    unsigned char a = 0b11001100;
    unsigned char b = 0b11001100;
    printf("%i, %i ->\n", a, b, a or b)
   }
 for (unsigned char i = 10; i < 77; i++){ // unsigned char(bez znaménka , nebo jen char se znaménkem)
      printf("cislo: %f\n", i / 2.);
   }
}

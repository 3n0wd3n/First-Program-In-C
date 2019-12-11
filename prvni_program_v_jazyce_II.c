//---------->PRVNÍ PROGRAM
/*char number = 64;
int main(void){
   number = 64;
   printf("toto je cislo%d\n", number);
   printf("toto je znak %c\n", number);

   for (char i = 0; i < 11; i++){
      printf("cislo: %d\n", i);
   }

}
*/
//--------->DRUHÝ PROGRAM
#include <stdio.h>
#include <stdbool.h>
int cislo;

int main(void){

  //cislo = O17; //není to sedmnáct ale číslo v desítkové soustavě
  //cislo = Ox17; //v hexa soustavě
  cislo = 0b00010100; //v binární soustavě
  printf("hexa %X deca %d ocata %0\n", cislo, cislo);
  //cislo = cislo << 2; //v binární soustavě
  cislo &= 0xF0 //udělej mi logický součin --->
  printf("hexa %X deca %d ocata %0 \n", cislo, cislo);

  if (! cislo > 0 && cislo == 0) {
    printf("ahoj %d", cislo);
  } else {
    printf("lala %d");
  }
}

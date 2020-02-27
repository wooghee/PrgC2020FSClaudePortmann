#include <stdio.h>

// binary number printer

int main(void){

  // programmer input
  int decimal = 1323423447;
  
  // variables
  int divisionres = decimal;
  int rest = 0;
  
  
  printf("initial decimal %d\n",decimal);
  printf("binary form 0b");

  while(divisionres > 0){

    rest = divisionres%2;
    printf("%d", rest);
    divisionres = divisionres/2;
    
    
  }
  
 printf("\n");
}

#include <stdio.h>

int main(void){

  //bell system
  printf("\a");

  //print symbol ascii for octa 100 - @
  printf("\100\n");

  //print symbol ascii for hex 41 - A
  printf("\x41\n");

  printf("Value integer: %d\n", 38);

  printf("Value float: %f\n", 3.14159);

  printf("Value float with two decimal: %.2f\n", 3.14149);

  printf("Value char: %c\n", 'A');

  printf("Value string: %s\n", "Marcelo");

  return 0;
}


#include <stdio.h>

int main(void){	
	
  int ret = 0;

  printf("retorno printf(): %d\n", ret);

  /*
   * output in decimal and convert values
   * 0 - 10 - 10 (convert 0xa) - 65 (convert 'A')
  */
  printf("%d - %d - %d - %d\n", ret, 10, 0xa, 'A');

  /*
   * output in hex
   * 0 - a - a - 41
  */
  printf("\n%x - %x - %x - %x\n", ret, 10, 0xa, 'A');

  //%c to char
  printf("\n%x - %x - %x - %c\n", ret, 10, 0xa, 'A');
	
  printf("\n%x - %x - %x - %c\n", ret, 10, 0xa, 0x41);
  
  return 0;
}

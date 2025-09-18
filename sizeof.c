#include <stdio.h>

int main(void){

  char name = 'A';

  int charInt = name; 

  printf("%zu byte\n", sizeof(name));
  printf("%zu byte\n", sizeof(charInt));

  printf("name is %c and charInt is %d in hex %x\n", name, charInt, charInt);
    
  return 0;    
}

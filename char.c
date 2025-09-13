#include <stdio.h>

int main(void){

  char c;

  printf("Tamanho de c (char): %lu bytes / %lu bits\n", sizeof c, sizeof c * 8);

  return 0;
}

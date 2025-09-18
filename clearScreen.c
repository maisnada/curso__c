#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void){

  int i = 0;

  char bar[50] = "["; 

  //bar[49] = "]";

  while(i <= 47){

    printf("%s\n", 2,strcat(bar, ">"));

    

    i++;

    sleep(0.8);
  }

  /*
  system("cls || clear");

  printf("Clear screen complete!\n\n");
  */
  return 0;
}

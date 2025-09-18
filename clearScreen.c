#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void showHeader(){

  printf("Loading...\n\n");
 
}

int main(void){

  int i = 0;

  char bar[49] = "["; 

  while(i <= 47){

    system("clear");

    showHeader();
        
    printf("%s",strcat(bar, ">"));
 
    printf("%*s\n", 48 - i, "]");
    
    i++;

    sleep(1);
  }
 
  return 0;
}

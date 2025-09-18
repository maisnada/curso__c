#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define DELAY 400
#define SIZE_BAR 60

void printHeader(){

  printf("Loading...\n\n");
}

int calculatePercentage(int progressCount){

  if(progressCount > 0){

    return progressCount * 2;
  }

  return 0;
}

void printPercentage(int progressCount){

  int percentage = calculatePercentage(progressCount);
  
  int padLeft = SIZE_BAR - progressCount;  
    
  printf("%*s %d%%\n", padLeft, "\x1b[32m]\x1b[0m", percentage);
}

void printProgress(char progress[], int progressCount){
  
  printf("%s", progress);

  printPercentage(progressCount);
}

void barAppend(char bar[], int progressCount){

  strcat(bar, ">");
}

void delay(){

  usleep(DELAY * 1000);
}

void initBar(char bar[]){

  system("clear");

  printHeader();

  printProgress(bar, 0);

  delay();
}

int main(void){

  char bar[SIZE_BAR - 1] = "\x1b[32m[\x1b[0m";

  initBar(bar);

  int i = 1;

  //bar[0..9] alocaded start bar 
  while(i <= (SIZE_BAR - 10)){

    system("clear");

    printHeader(); 

    barAppend(bar, i);
        
    printProgress(bar, i);
    
    delay();  

    i++;
  }
 
  return 0;

}

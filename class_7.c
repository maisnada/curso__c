#include <stdio.h>

int main(void){

  int i = 0;

  while(i < 10){

    printf("Value i = %d\n", i);

    i++;
  }

  int ages[2];
  int c = 0;

  do{

    printf("Type age position %d\n", c);

    scanf("%d", &ages[c]);
    
    c++;

  }while(c < 3);


  for(int x = 0; x < 3; x++){

    printf("Age position %d is %d\n", x, ages[x]);
  }

  return 0;

}

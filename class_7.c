#include <stdio.h>
#include <stdbool.h>

int main(void){

  int i = 0;

  while(i < 10){

    printf("Value i = %d\n", i);

    i++;
  }

  int ages[3];
  int c = 0;

  do{

    printf("Type age position %d\n", c);

    scanf("%d", &ages[c]);
    
    c++;

  }while(c < 3);


  for(int x = 0; x < 3; x++){

    printf("Age position %d is %d\n", x, ages[x]);
  }

 
  for(int x = 0; x < 3; x++){

    if(x % 2 == 0){

      printf("Position %d even\n", x);

      continue;
    }

    printf("Position %d odd\n", x);
  }

  char key;

  do{

    printf("Type 'y' to exit\n");

    scanf("%c", &key);

    if(key == 'y'){

      break;
    }

  }while(true);

  
  return 0;

}

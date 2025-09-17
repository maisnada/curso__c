#include <stdio.h>
#include <stdbool.h>

#define AVERAGE 7

bool isPassed(int grade){

  if(grade > AVERAGE){

    return true;
  }

  return false;
}

int main(void){

  float grade = 0;

  printf("Type grade:\n");

  scanf("%f", &grade);

  if(isPassed(grade)){

      printf("\x1b[32mPassed. Grade: %.2f\x1b[0m\n", grade);
  
    }else{

      printf("\x1b[31mFalied. Grade: %.2f\x1b[0m\n", grade);
   }

  return 0;
}

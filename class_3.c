#include <stdio.h>

int main(void){

  int age = 0;
  float weight = 0;
  
  printf("How old are you?\n");

  scanf("%d", &age);

  printf("Whats is your weight?\n");

  scanf("%f", &weight);

  printf("Your age is %d and weight %.2f\n", age, weight);

  return 0;
}

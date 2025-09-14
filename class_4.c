#include <stdio.h>

#define text "Input and Output data"

int main(void){

  printf("%s\n\n", text);

  int age = 0;
  float tall = 0;
  char name[50] = "";

  printf("How old are you?\n");

  scanf("%d", &age);

  printf("How tall are you?\n");

  scanf("%f", &tall);

  printf("Whats your name?\n");

  scanf("%s", name);

  printf("Hi %s! Your age is %d and tall is %.2f.\n", name, age, tall);
}

#include <stdio.h>

void printWithColor(char text[]){

  printf("\x1b[32m%s\x1b[0m\n", text);
}

int main(void){

  int age = 0;

  char name[50] = "";

  char buffer_string[100] = "";

  printf("\x1b[32mHow old are you?\x1b[0m\n");

  scanf("%d", &age);

  printf("What's your name?\n");

  scanf("%s", name);

  if(age >= 18){

    sprintf(buffer_string, "Your name is %s and age %d years. Over 18.\n", name, age);
  
  }else{
        
    sprintf(buffer_string, "Your name is %s and age %d years. Under age.\n", name, age);
   
  }

  printWithColor(buffer_string);

  return 0;

}

#include<stdio.h>

int main() {
  int age;
  printf("How old are you? \n");
  scanf("%d", &age);
  printf("\n");
  
  if(age < 18) {
    printf("small child cant vote\n");
  } else {
    printf("go vote now\n");
  }
}

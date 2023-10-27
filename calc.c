#include<stdio.h>
#include<stdlib.h>

int main() {
  char ch;
  float x, y;
  float ans;
  printf("----- CALCULATOR -----\n\n");
  printf("Choose your operation: + - * /   ~~~> ");
  scanf("%c", &ch);
  printf("\n");
  printf("Give 2 numbers   ~~~> ");
  scanf("%f%f",&x,&y);
  
  switch(ch) {
    case '+': ans = x+y; break;
    case '-': ans = x-y; break;
    case '*': ans = x*y; break;
    case '/': ans = x/y; break;
    default: printf("Invalid operation"); exit(0); break;
  }
  
  printf("\n%0.2f %c %0.2f is equal to %0.2f\n\n", x, ch, y, ans);
}


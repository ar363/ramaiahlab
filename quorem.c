#include<stdio.h>
#include<stdlib.h>

int main() {
  int a, b, quotient, remainder;
  
  printf("Enter two numbers \n");
  scanf("%d%d", &a, &b);

  if (b == 0) {
    printf("Cant divide by zero");
    exit(0);
  }
  
  quotient = a/b;
  remainder = a%b;
  
  printf("Quotient is %d and remainder is %d \n", quotient, remainder);
  
}




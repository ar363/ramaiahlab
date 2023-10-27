#include<stdio.h>

int main() {
  int a, b, quotient, remainder;
  
  printf("Enter two numbers \n");
  scanf("%d%d", &a, &b);
  
  quotient = a/b;
  remainder = a%b;
  
  printf("Quotient is %d and remainder is %d \n", quotient, remainder);
  
}




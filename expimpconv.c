#include<stdio.h>

int main() {
  int a, b;
  double cimp, cexp;
  printf("Enter 2 numbers\n");
  scanf("%d%d", &a, &b);
  
  
  cimp = a - b; // implicit conversion
  cexp = (double)a - b; // explicit conversion

  printf("Implicit result = %.2lf and explicit result = %.2lf\n", cimp, cexp);
  
}


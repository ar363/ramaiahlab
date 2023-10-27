#include<stdio.h>

int main() {
  float unitprice, qty, disc, taxRate, subtotal, grandtotal, taxamt;
  
  printf("Enter unit price, qty, discount and tax rate\n");
  scanf("%f%f%f%f", &unitprice, &qty, &disc, &taxRate);
  
  subtotal = (unitprice * qty) - disc;
  taxamt = subtotal * taxRate / 100;
  grandtotal = subtotal + taxamt;
  
  
  printf("Total sales is %f \n", grandtotal);
  
}





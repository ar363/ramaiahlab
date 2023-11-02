#include <stdio.h>

int main()
{
  float unitprice, qty, disc, taxRate, subtotal, subtaxable, grandtotal, taxamt;

  printf("Enter unit price, qty, discount and tax rate\n");
  scanf("%f%f%f%f", &unitprice, &qty, &disc, &taxRate);

  subtotal = (unitprice * qty);
  subtaxable = subtotal - disc;
  taxamt = subtaxable * taxRate / 100;
  grandtotal = subtaxable + taxamt;

  printf("Unit Price: %.2f\n", unitprice);
  printf("Subtotal: %.2f\n", subtotal);
  printf("Discount: -%.2f\n", disc);
  printf("Discounted Total: %.2f\n", subtaxable);
  printf("Sales Tax: %.2f\n\n", taxamt);

  printf("Total sales is %.2f \n", grandtotal);
}

/*

OUTPUT :: 

Enter unit price, qty, discount and tax rate
50 200 250 18
Unit Price: 50.00
Subtotal: 10000.00
Discount: -250.00
Discounted Total: 9750.00
Sales Tax: 1755.00

Total sales is 11505.00

*/

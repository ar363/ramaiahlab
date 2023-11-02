#include <stdio.h>

int main(void)
{
    // Local Declarations
    int a = 3, b = 4, c = 5, x, y;
    
    // Statements
    printf("Initial values of the variables: \n");
    printf(" a = %d , b = %d , c = %d \n", a, b, c);

    x = a * 4 + b / 2 - c * b;
    y = -a * (3 + b) / 2 - c++ * b;

    printf("Value of a * 4 + b / 2 - c * b  is  = %d \n", x);
    printf("Value of — a * ( 3 + b ) / 2 - c++ * b  is  = %d \n\n", x);

    printf("Values of the variables after evaluating complex expression: \n");
    printf(" a = %d , b = %d , c = %d \n ", a, b, c);

    return 0;
}

/*
 OUTPUT ::

Initial values of the variables:
 a = 3 , b = 4 , c = 5
Value of a * 4 + b / 2 - c * b  is  = -6
Value of — a * ( 3 + b ) / 2 - c++ * b  is  = -6

Values of the variables after evaluating complex expression:
 a = 3 , b = 4 , c = 6

*/
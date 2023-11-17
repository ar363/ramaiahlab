/*
factorial using loop 
*/

#include<stdio.h>

long factorial(int n);

void main() {
	int n;
	long facn;
	printf("Enter number: ");
	scanf("%d", &n);
	
	facn = factorial(n);	
	
	printf("Factorial of the number is %ld\n", facn);
	
}

long factorial ( int n ) {
	long facn = 1 ;
	
	for ( int i=1 ; i <= n; i++)
		facn *= i ;
	
	return facn;
}

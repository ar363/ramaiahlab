/*
factorial using recursion 
*/

#include<stdio.h>

long factorial(long n);

void main() {
	int n;
	long facn;
	printf("Enter number: ");
	scanf("%d", &n);
	
	facn = factorial(n);	
	
	printf("Factorial of the number is %ld\n", facn);
	
}

long factorial ( long n ) {
	if(n==0) return 1;
		
	return n*factorial(n-1);
}


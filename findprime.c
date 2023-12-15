#include<stdio.h>

void checkPrimeNumber() {
	int x;
	
	printf("Enter a number to check if its prime: ");
	scanf("%d", &x);
	
	int minDivisible = 1;
	for(int i = 1; i < x; i++) {
		if(x % i == 0) {
			minDivisible = i;	
		}
	}
	
	if(minDivisible == 1) printf("The number is prime\n");
	else printf("The number is not prime\n");
}

void main() {
	checkPrimeNumber();
}

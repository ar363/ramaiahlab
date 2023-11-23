/*
sum of digits 
*/

#include<stdio.h>

void main() {
	int x, sumofdigs = 0, noofdigs = 0, i = 0;
	printf("Enter number: ");
	scanf("%d", &x);
	printf("Your number is %d\n", x);
	
	while (x != 0) {
		noofdigs++;
		sumofdigs += x%10;
		x /= 10;
	}
	
	printf("The number of digits is %d\n", noofdigs);
	printf("The sum of digits is %d\n", sumofdigs);
	
	
}

/*
Enter number: 153
Your number is 153
The number of digits is 3
The sum of digits is 9
*/
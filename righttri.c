/*
C-Program to print a number series from 1 to a user-specified limit in the form of a
right triangle
*/

#include<stdio.h>

void main() {
	int lim, i, j;
	printf("Enter pattern limit: ");
	scanf("%d", &lim);
	for(i=1; i<=lim; i++) {
		for(j=1; j<=i; j++) {
		  printf("%d ", j);
		}
		printf("\n");
	}
}

/*

Enter pattern limit: 6
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6

*/

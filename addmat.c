/*
• C-Program to perform addition of two matrices.
*/
#include<stdio.h>

void main() {
	int m1[100][100], m2[100][100], msum[100][100], nrows, ncols, i, j;
	
	printf("Enter no of rows of matrices: ");
	scanf("%d", &nrows);
	printf("Enter no of cols of matrices: ");
	scanf("%d", &ncols);
	
	printf("Enter elements for matrix 1\n");
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("Enter elements for matrix 2\n");
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			scanf("%d", &m2[i][j]);
		}
	}
	
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			msum[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	printf("Sum of matrices is: \n");
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			printf("%d\t", msum[i][j]);
		}
		printf("\n");
	}

}

/*
Enter no of rows of matrices: 2
Enter no of cols of matrices: 2
Enter elements for matrix 1
4 6 1 7
Enter elements for matrix 2
3 5 2 8
Sum of matrices is: 
7	11	
3	15
*/


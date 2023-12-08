/*
• C-Program to perform addition of two matrices.
*/
#include<stdio.h>

void main() {
	int a[100][100], rowsum, colsum, fullsum = 0, nrows, ncols, i, j;
	
	printf("Enter no of rows of matrices: ");
	scanf("%d", &nrows);
	printf("Enter no of cols of matrices: ");
	scanf("%d", &ncols);
	
	printf("Enter elements for matrix\n");
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<nrows; i++) {
		rowsum = 0;
		for(j=0; j<ncols; j++) {
			rowsum += a[i][j];
		}
		printf("Row sum of row %d is = %d\n", i+1, rowsum);
	}
	
	for(i=0; i<ncols; i++) {
		colsum = 0;
		for(j=0; j<nrows; j++) {
			colsum += a[j][i];
		}
		printf("Col sum of col %d is = %d\n", i+1, colsum);
	}
	
	
	for(i=0; i<nrows; i++) {
		for(j=0; j<ncols; j++) {
			fullsum += a[i][j];
		}
	}
	printf("Sum of all elements is = %d\n", fullsum);

}


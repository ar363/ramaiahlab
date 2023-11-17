/*
square of index
*/

#include<stdio.h>
#define ARY_SIZE 5

void main() {
	int sqrArray[ARY_SIZE], i;
	
	for (i=0; i<ARY_SIZE; i++)
		sqrArray[i] = i*i;
	
	printf( "Element\tSquare\n" ) ;
	printf("=======\t======\n" ) ;
	for (i = 0; i < ARY_SIZE ; i++)
		printf( " %d\t%d\n" , i , sqrArray[i]);
	
}


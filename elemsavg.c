/*
average of elements in an array
*/

#include<stdio.h>

double average(int ary[]) {
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
		sum += ary[i];
	
	return sum / 5.0;
}

void main() {
  int ary[] = {4, 6, 3, 9, 8};
  double avg = average(ary);
  printf("Average of the array is %.2f\n", avg);
}


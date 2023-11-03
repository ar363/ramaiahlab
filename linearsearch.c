// Linear search

#include<stdio.h>

int main() {
	
	int a[100], n, i, tofind, pos = -1;
	
	printf("Enter the number of elements for array\n");
	scanf("%d", &n);
	
	printf("Enter the elements\n");
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Enter the element to find\n");
	scanf("%d", &tofind);

	for(i=0; i<n; i++) {
		if(a[i] == tofind) {
			pos = i;
			break;
		}
	}
	
	if(pos != -1)
		printf("Found element at position %d\n", pos);
	else
		printf("Element not found\n");
	
	return 0;
}

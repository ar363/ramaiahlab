// Linear search

#include<stdio.h>

int main() {
	
	int a[100], n, i, tofind, pos = -1, beg, end, mid;
	
	printf("Enter the number of elements for array\n");
	scanf("%d", &n);
	
	printf("Enter the sorted elements\n");
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}
	
	printf("Enter the element to find\n");
	scanf("%d", &tofind);
	
	beg = 0;
	end = n-1;
	
	while(end > beg) {
		mid = (beg + end)/2;
		if(a[mid] > tofind)
			end = mid - 1;
		else if(a[mid] < tofind)
			beg = mid + 1;
		else {
			pos = mid;
			break;
		}
	}
	
	if(pos != -1)
		printf("Found element at position %d\n", pos);
	else
		printf("Element not found\n");
	
	return 0;
}

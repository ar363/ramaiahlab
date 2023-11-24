#include<stdio.h>

int main() {

int a[100], n, i, j, t;

printf("Enter the size of array: ");
scanf("%d", &n);
printf("Enter the elements:\n");
for(i=0; i<n; i++) scanf("%d", &a[i]);

for(i=0; i<n-1; i++) {
  for(j=0; j<n-i-1; j++) {
    if(a[j] > a[j+1]) {
    	int temp = a[j];
    	a[j]=a[j+1];
    	a[j+1]=temp;
    }
  }
}


for(i=0; i<n; i++) printf("%d ", a[i]);

}

/*
Enter the size of array: 5 
Enter the elements:
12 54 10 9 23
9 10 12 23 54
*/

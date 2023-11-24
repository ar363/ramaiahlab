/* • C-Program to print n fibonacci numbers. (Page:355) */

#include<stdio.h>

void genfib(int n) {
    int first=0, second=1, next;
    
    printf("The fibonacci series of %d elements is:\n", n);
    
    for(int i = 0; i < n; ++i) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");

}

void main() {
    int n;
    printf("Enter the no of series elements to print: ");
    scanf("%d", &n);
    genfib(n);
}

/*
Enter the no of series elements to print: 10
The fibonacci series of 10 elements is:
0 1 1 2 3 5 8 13 21 34
*/

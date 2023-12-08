#include<stdio.h>
int main() {
    int a[10][10], at[10][10], n, i, j;

    printf("Enter the no of elements in matrix ");
    scanf("%d", &n);
    printf("Enter the elements of matrix: \n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            at[i][j] = a[j][i];
        }
    }

    printf("The transpose is: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", at[i][j]);
        }
        printf("\n");
    }
    return 0;
}

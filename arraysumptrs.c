#include <stdio.h>

void main()
{
    int i, n, sum = 0;
    int a[50];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    for (i = 0; i < n; i++)
    {
        sum += *(a + i);
    }

    printf("Sum of elements in array = %d\n", sum);
}
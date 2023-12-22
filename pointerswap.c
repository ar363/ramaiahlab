#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter 2 numbers x, y: ");
    scanf("%d%d", &x, &y);

    int *p = &x;
    int *q = &y;

    int tmp = *p;
    *p = *q;
    *q = tmp;

    printf("After swapping:\n x=%d , y=%d\n", x, y);
}
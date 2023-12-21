#include<stdio.h>
#include<stdlib.h>

void main() {
    int op, x, y;
    float area;

    printf("Area finder \n");
    printf("Press \n 1-triangle \n 2-square \n 3-rectangle \n 4-circle\n: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Enter base and height of triangle: ");
            scanf("%d%d", &x, &y);
            area = 0.5*x*y;
        break;
        case 2:
            printf("Enter length of side of square: ");
            scanf("%d", &x);
            area = x*x;
        break;
        case 3:
            printf("Enter length and breadth of rectangle: ");
            scanf("%d%d", &x, &y);
            area = x*y;
        break;
        case 4:
            printf("Enter radius of circle: ");
            scanf("%d", &x);
            area = 3.14*x*x;
        break;
        default:
            printf("Invalid input\n");
            exit(0);
    }
    printf("Its area is %.2f\n",  area);
}
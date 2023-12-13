#include<stdio.h>
void main() {
    int a, b, lcm, hcf;
    printf("Enter the 2 numbers: ");
    scanf("%d%d", &a, &b);

    for(int i = 1; i<=a && i<=b; i++) {
        if(a%i == 0 && b%i == 0) hcf = i;
    }

    lcm = (a*b) / hcf;

    printf("HCF is %d and LCM is %d", hcf, lcm);
}


#include<stdio.h>

void calcHCFandLCM(int a, int b) {
	int hcf, lcm;
		
	for(int i = 1; i<=a && i<=b; i++) {
		if(a%i == 0 && b%i == 0) hcf = i;
	}

	lcm = (a*b) / hcf;
    
	printf("HCF is %d and LCM is %d\n", hcf, lcm);
}


void main() {
	int a, b;
	printf("Enter the 2 numbers: ");
	scanf("%d%d", &a, &b);

	calcHCFandLCM(a, b);
}



#include<stdio.h>

int binaryToDeci(long long binaryNo) {
    int deciNo = 0, i = 0, remainder;

    while(binaryNo != 0) {
        remainder = binaryNo % 10;
        binaryNo /= 10;
        deciNo += remainder * (1<<i);
        i++;
    }

    return deciNo;
}

void main() {
    long long binaryNo;
    int deciNo;
    printf("Enter binary number: ");
    scanf("%lld", &binaryNo);
    deciNo = binaryToDeci(binaryNo);
    printf("Its decimal form is %d\n", deciNo);
}

/*
Enter binary number: 1011
Its decimal form is 11
*/

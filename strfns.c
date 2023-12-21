#include<stdio.h>
#include <string.h>

void main() {
	char s1[50], s2[50], s1copy[50];

	printf("Enter a string\n");
	gets(s1);

    strcpy(s1copy, s1);
    printf("Original: %s, Copied str: %s\n", s1, s1copy);
	
	printf("Enter another string to concatenate\n");
	gets(s2);
	
	strcat(s1copy, s2);
    printf("Concatenated string: %s\n", s1copy);

    printf("Comparing the 2 strings: \n");
    int result = strcmp(s1, s2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 smaller than string 2 \n");
    else
        printf("String 1 larger than string 2 \n");

    printf("Length of string 1 is %d\n", strlen(s1));
}

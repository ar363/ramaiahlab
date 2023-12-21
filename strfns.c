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
    printf("Length of string1 is %d & string2 is %d\n", strlen(s1), strlen(s2));
    int result = strcmp(s1, s2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 2 is greater\n");
    else
        printf("String 1 is greater\n");

}

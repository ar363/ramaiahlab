#include<stdio.h>

void main() {
	char s1[100], s2[100];
	int s1Length = 0, s2Length = 0, i = 0;

	printf("Enter a string\n");
	scanf("%s", s1);
	
	printf("Enter another string\n");
	scanf("%s", s2);
	
	while(s1[s1Length] != '\0') s1Length++;
	
	while(s2[s2Length] != '\0') s2Length++;
	
	while(s1[i] == s2[i] && s1[i] != '\0') i++;
	
	if(s1[i] > s2[i]) 
		printf("First string is greater\n");
	else if (s1[i] < s2[i])
		printf("Second string is greater\n");
	else
		printf("Strings are equal\n");

}

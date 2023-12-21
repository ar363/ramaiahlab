#include<stdio.h>

void main() {
	char s1[100], s2[100], sComb[200];
	int i = 0, s1Length = 0, s2Length;

	printf("Enter a string\n");
	gets(s1);
	
	printf("Enter another string\n");
	gets(s2);
	
	
	while(s1[i] != '\0') {
		sComb[i] = s1[i];
		s1Length++;
		i++;
	}
	
	i = 0;
	while(s2[i] != '\0') {
		sComb[s1Length + i]  = s2[i];
		s2Length++;
		i++;
	}
	
	sComb[s1Length + s2Length] = '\0';
	
	printf("THe combined string is\n%s\n", sComb);
}

/*

• C-Program to determine the use of the character classification functions found in
c-type library. (Page:267)

*/

#include<stdio.h>
#include<ctype.h>

int main() {
	char ch;
	
	printf("Enter a character:\n");
	scanf("%c", &ch);
	
	if(islower(ch))
		printf("You entered a lowercase letter\n");
	else if(isupper(ch))
		printf("You entered an uppercase letter\n");
	else if(isdigit(ch))
		printf("You entered a number\n");
	else if(ispunct(ch))
		printf("You entered a punctuation character\n");
	else if(isspace(ch))
		printf("You entered a whitespace character\n");
	else
		printf("You entered a control character\n");
	
	return 0;
}

/*

OUTPUT:

Enter a character:
m
You entered a lowercase letter

*/

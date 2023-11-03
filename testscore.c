/*

• C-Program to read a test score, calculate the grade for the score and print the grade.
(Page: 259)

*/


#include<stdio.h>


char scoreToGrade(int score);

int main() {

	int score;
	char grade;
	
	printf("Enter the score (0-100): ");
	scanf("%d", &score);
	grade = scoreToGrade(score);
	printf("The grade is %c\n", grade);

	return 0;
}

char scoreToGrade(int score) {
	char grade;
	int tmp = score / 10;
	
	switch(tmp) {
		case 10:
		case 9:
			grade = 'A'; break;
		case 8:
			grade = 'B'; break;
		case 7:
			grade = 'C'; break;
		case 6:
			grade = 'D'; break;
		default:
			grade = 'F';
	}
	
	return grade;
	
}

/*
OUTPUT: 

Enter the score (0-100): 92
The grade is A

*/

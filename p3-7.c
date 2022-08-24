#include <stdio.h>
int main(){
	int score;
	char grade = 'X';
	printf("Please enter examination score: ");
	scanf ("%d", &score);
	if ((score<= 100) && (score >= 90)) grade = 'A';
	else if ((score < 90) && (score >=80)) grade = 'B';
		else printf ("X");
	printf("The grade is %c\n", grade);
}

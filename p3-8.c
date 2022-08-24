#include <stdio.h>
int main(){
	int score;
	char grade;
	printf("Please enter wxamination score: ");
	scanf("%d", &score);
	score = score / 10;
	switch (score) {
		case 10 :
		case 9 : grade = 'A'; break;
		case 8 : grade = 'B'; break;
		case 7 : grade = 'C'; break;
		case 6 : grade = 'D'; break;
		default : grade = 'F'; break;
	}
	printf("The grade is %c\n", grade);
}

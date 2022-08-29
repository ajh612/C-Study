#include <stdio.h>
#include <conio.h>

int main(){
	int number = 1, sum =0;
	
	while (number < 5) {
		sum = sum + number;
		printf("number : %d\tsum : %d\n", number, sum);
		number++;
		getch();
	}
	printf("The sum of the first 5 integer is %d\n", sum);
}

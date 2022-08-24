#include <stdio.h>

int main(){
	int number;
	long sum = 0;
	
	while (number != 0) {
		sum =+ number;
		printf ("Please enter an integer <0 to quit> : ");
		scanf ("%d", &number);
	}
	printf ("The sum of numbers is %ld.\n", sum);
}

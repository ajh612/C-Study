#include <stdio.h>

int main(){
	int number =1, sum =0;
	
	while (number < 5){
		sum = sum + number++;
	}
	printf("The sum of the first 5 integer is %d\n", sum);
}

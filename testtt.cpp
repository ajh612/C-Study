#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	number = 0;
	while (number < 10 ){
		number = number+1;
		if (number == 10){
		printf("%d", number);
		}
		else{
		printf("%d,", number);
		}
	}
}

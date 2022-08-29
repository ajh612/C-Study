#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	number = 10;
	while (number > 1){
		number = number - 1;
		if (number == 1){
			printf("%d",number);
		}
		else {
			printf("%d,",number);
		}
	}
}

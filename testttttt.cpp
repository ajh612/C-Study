#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	number = -1;
	while (number < 9 ){
		number = number + 2*(+1);
		if (number == 9){
		printf("%d",number);
		}
		else{
		printf("%d,",number);
		}
	}
}

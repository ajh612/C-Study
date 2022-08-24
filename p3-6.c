#include <stdio.h>
int main(){
	int num1, num2, bigger, smaller;
	printf("Please enter two integer:");
	scanf("%d %d", &num1, &num2);
	if(num1 < num2){
		bigger = num2;
		smaller = num1;
	}
	else{
		bigger = num1;
		smaller = num2;
	}
	printf("The %d is larger than %3d\n", bigger, smaller);
}

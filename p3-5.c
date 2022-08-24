#include <stdio.h>
int main(){
	int num1, num2, bigger, smaller;
	
	printf("Please enter two integer");
	scanf("%d %d", &num1, &num2);
	bigger = num1;
	smaller = num2;
	if(num1 < num2){
		bigger = num2;
		smaller = num1;
	}
	printf("%d is larger than %3d\n", bigger, smaller);
}

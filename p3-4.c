#include <stdio.h>
int main(){
	int num1, num2, bigger;
	printf("Please enter two integers:");
	scanf("%d %d", &num1, &num2);
	bigger=num1;
	if (num1 < num2) bigger = num2;
	printf("The larger number is : %3d\n", bigger);
}

// unsigned long int 자료형의 사용 예를 보여주는 프로그램
#include <stdio.h>

int main(){
	unsigned long int num1, num2, num3;
	num1= 67UL;
	num2= 88UL;
	num3= num1 + num2;
	printf("unsigned long int num3 is %d\n", num3);
	printf("sizeof (num3) is %d.\n", sizeof (num3));
} 

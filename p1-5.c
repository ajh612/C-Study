#include <stdio.h>

int numsquare (int number);
int sum (int n1, int n2);
int print (int num);

int main(){
	int num1, num2, square1, square2, sum_num; // 변수의 동시선언
	num1 = 3;
	num2 = 5;
	square1 = numsquare(num1);
	square2 = numsquare(num2);
	sum_num = square1 + square2;
	print (sum_num);
}
int numsquare (int number){ //주어진 숫자의 제곱을 계산하는 함수 
	return(number*number);
}

int sum (int n1, int n2){   //두수의 합을 구하는 함수 
	return(n1 + n2);
}

int print (int num){        //숫자를 출력하는 함수  
	printf("The sum of square of two number is %d\n", num);
}

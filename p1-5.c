#include <stdio.h>

int numsquare (int number);
int sum (int n1, int n2);
int print (int num);

int main(){
	int num1, num2, square1, square2, sum_num; // ������ ���ü���
	num1 = 3;
	num2 = 5;
	square1 = numsquare(num1);
	square2 = numsquare(num2);
	sum_num = square1 + square2;
	print (sum_num);
}
int numsquare (int number){ //�־��� ������ ������ ����ϴ� �Լ� 
	return(number*number);
}

int sum (int n1, int n2){   //�μ��� ���� ���ϴ� �Լ� 
	return(n1 + n2);
}

int print (int num){        //���ڸ� ����ϴ� �Լ�  
	printf("The sum of square of two number is %d\n", num);
}

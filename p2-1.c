#include <stdio.h>

int main(){
	int num;
	
	num = 2147483647;    
	num = num +2;
	printf("최대값보다 2가 큰 값은 %d.\n", num); 
	num = num - 4;
	printf("최대값보다 2가 작은 값은 %d.\n", num);
}

//결과값이 최대값의 범위를 넘었기 때문에 오류가 발생함 
//4바이트에 저장되는 경우 -2147483648 부터 2147483647 이다 

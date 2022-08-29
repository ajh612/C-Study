#include <stdio.h>

int main(){
	int num, sum;
	
	for (num = 0, sum = 0; num <= 10; num = num + 2){
		sum += num;
		printf("num = %d : sum = %ld\n", num, sum);
	}
}

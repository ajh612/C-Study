#include <stdio.h>
int main(){
	int count;
	long sum =0;
	
	printf("Please enter an integer: ");
	scanf("%d", &count);
	while(count != 0){
		sum = sum + count;
		count = count -1;
	}
	printf("The sum is %d.\n", sum);
}

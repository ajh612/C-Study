#include <stdio.h>

int main(){
	int score[10], i, sum = 0;
	float average;
	
	for (i=1; i<=10; i++){
		printf("Please enter score[%d] : ",i);
		scanf("%d", &score[i]); 
	}
	
	for (i=1; i<=10; i++) sum += score[i];
	average = (float)sum / 10;
	printf ("average score : %f\n", average);
}

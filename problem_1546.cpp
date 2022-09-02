#include <stdio.h>

int score[1000]={0};

int main(){
	double max=0;
	int n;
	int sum=0;
	int i;
	scanf("%d",&n);
	
	for (i=0; i<n; i++){
		scanf("%d",&score[i]);
		sum += score[i];
		if(max<=score[i]){
			max = score[i];
		}
	}
	printf("%lf", sum/max*100/n);
}

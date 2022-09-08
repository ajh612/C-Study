#include <stdio.h>
float score[100] = {0};
float sum[1000] = {0};

int main(){
	
	int n, a;
	float sum = 0, average=0;
	
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
	
		scanf("%d",&a);
	
		for (int j=0; j<a; j++){
	
			scanf("%f", &score[j]);
			sum += score[j];  
		}
	
		average = sum / a;
	
	}
}

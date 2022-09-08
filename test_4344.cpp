#include <stdio.h>
float score[100] = {0};

int main(){
	
	int n, a=0;
	
	scanf("%d", &n);
	
	for (int i=0; i<n; i++){
		float cnt = 0, sum = 0;
		int average=0;
		scanf("%d",&a);
	
		for (int j=0; j<a; j++){
	
			scanf("%f", &score[j]);
			sum += score[j];  
		}
		average = sum / a;
		for (int j=0; j<a; j++){
			if(average < score[j]){
				cnt++;
			}
		}
		cnt = cnt / a;
		printf("%0.3f%%\n", cnt * 100);	
	}
}

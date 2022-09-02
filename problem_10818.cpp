#include <stdio.h>
int score[10000000]={0};
int max= -1000000, mini=10000000;

int main(){
		
	int i, n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &score[i]);
		if(max <= score[i]){
			max = score[i];	
		}
		if(mini >= score[i]){
			mini = score[i];
		}
	}
	printf("%d %d", mini, max);
	return 0;
}


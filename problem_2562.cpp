#include <stdio.h>
int score[100]={0};
int max= 0;

int main(){
		
	int i, n=9, a;
	
	for(i=1; i<=n; i++){
		scanf("%d", &score[i]);
		if(max <= score[i]){
			max = score[i];
			a = i;	
		}
	}
	printf("%d\n", max);
	printf("%d",a);
	return 0;
}


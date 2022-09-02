#include <stdio.h>
int score[1000]={0};
int b;

int main(){
	int i, j, cnt=0;
	for(i=0; i<10; i++){
		scanf("%d",&b);
		score[i]=b%42;
	}
	
	for (i=0; i<10; i++){
		if (score[i]!=-1){
				
			for (j=i+1; j<10; j++){
				if (score[i]==score[j]){
					score[j]=-1;
				}
			}
			cnt++;		
		}
		
	}
	printf("%d", cnt);
}


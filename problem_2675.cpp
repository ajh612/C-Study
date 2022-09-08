#include <stdio.h>
char en[20]={0};

int main(){
	
	int n, a;
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &a);
		for (int j=0; j<a; j++){
			scanf("%s", &en[a]);
			printf("%s", en[a]);
		}
	}
}

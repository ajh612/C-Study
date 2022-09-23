#include <stdio.h>
#include <string.h>

int main(){
	char en[20];
	int a, b;
 
	
	scanf("%d", &a);
	
	for (int i=0; i<a; i++){
		
		scanf("%d", &b);
		scanf("%s", en);
		for (int  j=0; j<strlen(en); j++){
			for (int k=0; k<b; k++){
				printf("%c", en[j]);
			}
		}
			printf("\n");
	}
	return 0;
}

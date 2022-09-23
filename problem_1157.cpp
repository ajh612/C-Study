#include <stdio.h>
#include <string.h>

char en[1000000]={0};

int main(){
	scanf("%s", &en);
	for (int i=0; i<strlen(en); i++){
		for (int j=65; j<123; j++){
			if(en[i] == j) printf("%c", en[i]);
		}
	}
}

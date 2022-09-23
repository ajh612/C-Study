#include <stdio.h>
#include <string.h>
char a[30]={0};
char b[30]={0};

int main(){
	int i, j;
	scanf("%s %s", &a, &b);

	printf("*%s %s*\n*", a, b);
	
	for (i=0; i<strlen(a)-1; i++){
		printf(" ");
	}
	printf("%d", strlen(a));
	
	for (j=0; j<strlen(b); j++){
		printf(" ");
	}
	printf("%d", strlen(b));
	
	printf("*\n*%s %s*\n*", a, b);
	
	printf("%d", strlen(a));
	
	for (j=0; j<strlen(a); j++){
		printf(" ");
	}
	printf("%d", strlen(b));
	
	for (j=0; j<strlen(b)-1; j++){
		printf(" ");
	}
	printf("*");
}

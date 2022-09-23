#include <stdio.h>
char name[30]={0};

int main(){
	int a;
	scanf("%[^\n]s\n", &name);
	scanf("%d", &a);
	printf("%d %d", strlen(name)-2, a);
}

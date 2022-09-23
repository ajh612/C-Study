#include <stdio.h>
#include <string.h>

char en[1000000]={0};

int main(){
	int cnt=1;
	scanf("%[^\n]s", &en);
	char x = ' ';
	for (int i=1; i<strlen(en); i++){
		if (en[i] == ' '){
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}

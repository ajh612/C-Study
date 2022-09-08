#include <stdio.h>
#include <string.h>

int main(){
	int length;
	char astring[80] = {0};
	scanf("%d", &length);
	
	for (int i=0; i<length; i++){
		scanf("%s", &astring);
		
		int a=0, combo=0;
		
		for (int j=0; j<strlen(astring); j++){
			if(astring[j] == 'O'){
				a += 1;
				a = combo + a;
				combo ++;	
			}
			if(astring[j] == 'X'){
				combo = 0;
			}
			
		}
		printf("%d\n", a);
	}
}

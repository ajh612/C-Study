#include <stdio.h>

int main(){
	char astring[] = {'a','b','c','\0'};
	printf("%s\n", astring);
	astring[1] = 'k';
	printf("%s\n", astring);
}

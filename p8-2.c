#include <stdio.h>

int main(){
	char *p;
	
	printf("%s %p\t\n", "abc", "abc");
	printf("%s %p\t\n", "abc", "abc");
	
	p = "abc";
	printf("%s %p\t\n", p, p);
}

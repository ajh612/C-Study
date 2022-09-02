#include <stdio.h>
#include <string.h>

int main(){
	int length, size;
	
	length = strlen ("string");
	size = sizeof ("string");
	printf ("string length : %d\n", length);
	printf("string size : %d\n", size);
}

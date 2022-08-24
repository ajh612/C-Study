#include <stdio.h>
int main(){
	int x,y;
	x=2;
	y=x+5;
	printf("The size of int is %3d bytes.\n",sizeof(int));
	printf("The size of short is %3d bytes.\n",sizeof(short));
	printf("The size of long is %3d bytes.\n",sizeof(long));
	
	printf("The size of x is %3d bytes.\n", sizeof (x));
	printf("The size of (x+2) is %3d bytes.\n", sizeof (x+2));
}

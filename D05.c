#include <stdio.h>

int main(){
	int a, b, c, d, x;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	x = a+b+c+d;
	
	printf("%.2f%%", (float)d/x*100);
}

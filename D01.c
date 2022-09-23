#include <stdio.h>

int main(){
	float a, b, x, y;
	scanf("%f %f", &a, &b);
	x = a/8;
	printf("%.2fsec", b/x);
}

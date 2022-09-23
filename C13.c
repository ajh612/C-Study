#include <stdio.h>

int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.2fsec", (a/8)/(b/8));
}

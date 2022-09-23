#include <stdio.h>

int main(){
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.1f mpg or %.1f liters / 100km.", a/b, (b*3.785)/((a*1.609)/100));
}

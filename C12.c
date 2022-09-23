#include <stdio.h>

int main(){
	unsigned long x1, y1, x2, y2, x3, y3, a, b, c, d;
	scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &x2, &y2, &x3, &y3);
	a = (y1-y2);
	b = (x2-x1);
	c = (y1-y3);
	d = (x2-x3);
	printf("Area = %ld, Perimeter = %ld", a*b-c*d, a+b+c+d+(a-c)+(b-d));
	
}

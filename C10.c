# include <stdio.h>

int main(){
	unsigned long a, b, c, d;
	scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
	printf("Area = %ld, Perimeter = %ld", a*b - c*d, a+b+c+d+(a-c)+(b-d));
}

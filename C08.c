#include <stdio.h>
#include <math.h>

int main(){
	double a;
	scanf("%lf", &a);
	printf("Radius = %0.1lf, Area = %0.1lf, Perimeter = %0.1lf", a, a*a*M_PI, a*2*M_PI);
	return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
	double r1, r2, r3, r4, r5, sum, x;
	
	scanf("%lf %lf %lf %lf %lf", &r1, &r2, &r3, &r4, &r5);
	
	x = r1 + r2;
	sum = ((x*r3)+(r3*r5)+(r5*x))/(x+r3);
	
	x = (sum*r1)/(sum+r1);
	
	sum = x + r3 + r4;
	
	printf("%d",(int)round(sum));
	
}

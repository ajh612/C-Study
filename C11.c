#include <stdio.h>

int main(){
	double G, m1, m2, r;
	G = 6.67430e-17;
	scanf("%lf %lf %lf", &m1, &m2, &r);
	printf("%e", (G*m1*m2)/(r*r));
}

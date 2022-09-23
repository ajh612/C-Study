#include <stdio.h>

int main(){
	double x;
		
	scanf("%lf", &x);
	printf("%0.2lf cubic meters are equivalent to each of the following:\n", x);
	printf("%0.2lf hob\n", x*1000000/180.39);
	printf("%0.2lf doe\n", x*100000/180.39);
	printf("%0.2lf mal\n", x*10000/180.39);
	printf("%0.2lf liters", x*1000);
	
	return 0;
}

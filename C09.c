#include <stdio.h>
#include <math.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%0.2f %0.2f %0.2f", sqrt(2)/12*a*a*a, sqrt(3)*a*a, sqrt(6)*a/3);
	return 0;
}

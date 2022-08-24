// 원의 둘레들 계산하는 프로그램
#include <stdio.h>
#define PI 3.1416

int main(){
	int radius;
	float circumference;
	
	radius = 5;
	printf("The radius od circle is %d\n", radius);
	circumference = (radius + radius) * PI;
	printf("The circumference is %7.2f m.\n", circumference);
}
 

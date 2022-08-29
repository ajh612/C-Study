#include <stdio.h>

int main(){
	short snum = 5, *sp = &snum;
	float fnum = 2.3f, *fp = &fnum;
	int w;
	int *c = &w;
	printf("%p\n", c);
	printf("sp의 값: %p\n", sp);
	printf("증가된 sp의 값: %p\n", ++sp);
	printf("fp의 값: %p\n", fp);
	printf("증가된 fp의 값: %p\n", ++fp);
}

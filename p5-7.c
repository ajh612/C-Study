#include <stdio.h>

int main(){
	short snum = 5, *sp = &snum;
	float fnum = 2.3f, *fp = &fnum;
	int w;
	int *c = &w;
	printf("%p\n", c);
	printf("sp�� ��: %p\n", sp);
	printf("������ sp�� ��: %p\n", ++sp);
	printf("fp�� ��: %p\n", fp);
	printf("������ fp�� ��: %p\n", ++fp);
}

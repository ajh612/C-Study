#include <stdio.h>

int main(){
	int inum, *ip;
	short *sp;
	
	inum = 0x0F5A0B43;
	ip = &inum;
	printf("inum: %x ip : %p \n", inum, ip);
	
	sp = (short *)ip;
	printf("sp : %p, *sp : %x\n", sp, *sp);
	sp++;
	printf("sp : %p, *sp : %x\n", sp, *sp);
	
	*a = (int *) malloc(sizeof(int) * 5);
}

#include <stdio.h>

int main(){
	int i, score[5], *p = {1,2,3,4,5};
	
	p = score;
	for (i = 0; i < 5; i++)
		printf("&score[%d]: %p\tp: %p\n", i, &score[i], p++);
}

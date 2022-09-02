#include <stdio.h>

int main(){
	int i, score[5];
	printf("%p\n", score);
	for (i=0; i<5; i++)
	printf("&score[%d]: %p\n", i, &score[i]);
}

#include <stdio.h>

int main(){
	int i;
	float *fp;
	fp = &i;
	i = 357;
	*fp = *fp + 1;
	printf("%d\n", *fp);
}

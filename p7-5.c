#include <stdio.h>
 int main(){
 	int i, *p, score[10], sum;
 	
 	p = score;
 	printf("%p, %p\n", p, score);
 	for (i = 0; i <= 4; i++) score[i] = i * 10;
 	for (i = 0; i <= 4; i++) printf("score[%d] = %d\n", i, score[i]);
 	printf ("\n");
 	
 	sum = 0;
 	for (i = 0; i < 5; ++i) sum += score[i];
 	printf ("Method 1: %d\n", sum);
 	
 	sum = 0;
 	for (p = score; p<= &score[4]; ++p) sum += *p;
 	printf ("method 2: %d\n", sum);
 	
 	sum = 0;
 	for (i = 0; i < 5; ++i) sum += *(score + i);
 	printf ("Method 3: %d\n", sum);
 }

#include <stdio.h>
int main(){
	char ch;
	printf("Please enter any xharacter: ");
	ch = getchar();
	putchar (ch);
	printf(" is a letter you typed.\n");
	fflush (stdin);
	printf("please enter any character:");
	scanf("%c", &ch);
	printf("%c is a letter you typed.\n", ch);
}

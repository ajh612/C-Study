#include <stdio.h>
#include <conio.h>

int main(){
	char ch;
	
	printf("please enter any string <'q' to quit> :");
	while ((ch = getche()) != 'q') putchar(ch);
	putchar ('\n');
	
	printf("enter any string <'enter key' to quit> :");
	while ((ch = getchar()) != '\n') putchar (ch);
	putchar ('\n');
} 

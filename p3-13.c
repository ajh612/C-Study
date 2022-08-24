#include<stdio.h>
int main(){
	char ch;
	int count = 0;
	printf("Please enter characters <q for quit> :");
	ch = getchar();
	while (ch != 'q'){
		count++;
	ch = getchar();
	}
	printf("the number of character is %d\n", count);
	printf("This is the end of program.\n");
	return 0;
}

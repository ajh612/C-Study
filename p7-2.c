#include <stdio.h>

int main(){
	
	int i;
	int rose[5] = {78,97,56,84,66};
	int narcissus[] = {78,97,56,84,66,43};
	int violet[5] = {78,97,56};
	
	for (i=0; i<=4; i++) printf("%6d", rose[i]); printf("\n");
	for (i=0; i<=5; i++) printf("%6d", narcissus[i]); printf("\n");
	for (i=0; i<=4; i++) printf("%6d", violet[i]); printf("\n");
}

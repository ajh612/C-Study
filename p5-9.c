#include <stdio.h>

int main(){
	
	int score;
	char name[10];
	FILE *fpin, *fpout;
	
	fpin = fopen ("input.txt", "r");
	fpout = fopen ("output.txt", "w");
	
	while (fscanf(fpin, "%s %d",name, &score) != EOF){
		fprintf (fpout, "%s\t%d\n", name, score);
		printf ("%s\t\t%d\n", name, score);
		
	}
	fclose (fpin);
	fclose (fpout);
}

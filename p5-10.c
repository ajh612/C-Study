#include <stdio.h>
#include <process.h>

int main(){
	FILE *fp;
	char ch;
	int count;
	
	if((fp = fopen ("d5-10.dat","r")) == NULL){
		printf("File open error!!\n");
		exit (1);
	}
	
	count = fscanf(fp, "%c", &ch);
	while (count != -1){
		putchar (ch);
		count = fscanf (fp, "%c", &ch);
	}

	fclose (fp);
}

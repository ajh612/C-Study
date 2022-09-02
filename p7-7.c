#include <stdio.h>

int main(){
	int i, j;
	int array[3][4] = {{15,23,45,56},
						{34,52,76,23},
						{43,62,91,84}};
						
	for (i=0; i<3; i++){
		for (j=0; j<4; j++) printf ("%d ", array[i][j]);
		printf ("\n");
	}
	
}

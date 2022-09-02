#include <stdio.h>
#include <conio.h>

int bubble_sort (int array[], int count);
int swap (int *px, int *py);
int printVector (int V[], int n);

int main(){
	int vector[5] = {5,4,3,2,1};
	bubble_sort (vector, 5);
}

int bubble_sort (int array[], int count){
	int i,j;
	
	for (i = 0; i < count - 1; i++){
		for (j = 0; j < count - 1 - i; j++)
			if (array[j] > array[j+1]){
				swap (&array[j], &array[j + 1]);
				printVector (array, 5);
				getch();
			}
		printf("\n");
	}
}

int swap (int *px, int *py){
	int temp = *px;
	*px = *py;
	*py = temp;
}

int printVector (int V[], int n){
	int i;
	for (i = 0; i < n; i++) printf("%5d", V[i]);
	printf("\n");
}

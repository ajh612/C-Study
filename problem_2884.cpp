//45분 앞 당기기  


#include <stdio.h>

int main(){
	int hour, min ;
	scanf("%d %d", &hour, &min); 
	if (min == 60){
		hour = hour + 1;
		min = min - 60;
	}
	printf("%d %d", hour, min);
}

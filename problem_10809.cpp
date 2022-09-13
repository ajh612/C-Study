//영어 소문자는 26개
#include <stdio.h>
#include <string.h>

int main(){
	 
	// 문자열을 만든다
	char a[100]={0};
	
	//문자열을 입력받는다
	scanf ("%s", a);
	
	//문자열을 한 글자 씩 검사한다.
	int length = strlen(a);
	int sw=0;
	for	(int i=97; i<123; i++){
		
		for (int j=0; j<length; j++){
			if( i == a[j]){
			printf("%d ", j);
			sw=1;
			break;
			}
		}
		
		if (sw==0) printf("-1 ");
		
		sw=0;
	}
	return 0;
}


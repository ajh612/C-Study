//���� �ҹ��ڴ� 26��
#include <stdio.h>
#include <string.h>

int main(){
	 
	// ���ڿ��� �����
	char a[100]={0};
	
	//���ڿ��� �Է¹޴´�
	scanf ("%s", a);
	
	//���ڿ��� �� ���� �� �˻��Ѵ�.
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


//�����ƶü�
//�~�P
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����1~100�����ƪ��ü�
#define Size 10
int main(){
	int a[Size];
	int pos,temp,i;
	srand((unsigned)time(NULL));
	//�إ� 
	for(i = 0; i < Size;i++){
		a[i]=i;
		printf("%d ", a[i]);
	}
	printf("\n");
	//�~�P
	for(i = 0; i < Size;i++){
    	pos = rand()*(Size-1)/RAND_MAX; //���ͤ@��0~(SIZE-1)���ü� 
  		temp = a[i];//�@�H���洫 
  		a[i] = a[pos];
  		a[pos] = temp;
 	} 
    for(i = 0; i < Size;i++)
    	printf("%d ", a[i]);
	return 0;
}
 

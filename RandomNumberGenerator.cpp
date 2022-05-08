//不重複亂數
//洗牌
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//產生1~100不重複的亂數
#define Size 10
int main(){
	int a[Size];
	int pos,temp,i;
	srand((unsigned)time(NULL));
	//建立 
	for(i = 0; i < Size;i++){
		a[i]=i;
		printf("%d ", a[i]);
	}
	printf("\n");
	//洗牌
	for(i = 0; i < Size;i++){
    	pos = rand()*(Size-1)/RAND_MAX; //產生一組0~(SIZE-1)的亂數 
  		temp = a[i];//作隨機交換 
  		a[i] = a[pos];
  		a[pos] = temp;
 	} 
    for(i = 0; i < Size;i++)
    	printf("%d ", a[i]);
	return 0;
}
 

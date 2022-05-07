#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define MAX 7
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
void quickSort(int[], int, int); 
int main(void) { 
    srand(time(NULL)); 
    int number[MAX] = {61,26,50,38,97,7,8}; 
	   printf("�Ƨǫe�G"); 
    int i;  
    for(i = 0; i < MAX; i++) { 
        printf("%d ", number[i]); 
    } 
    quickSort(number, 0, MAX-1); 
    printf("\n�Ƨǫ�G"); 
    for(i = 0; i < MAX; i++) 
        printf("%d ", number[i]); 
    printf("\n"); 

    return 0; 
} 

void quickSort(int number[], int left, int right) { 
//�ƦC��,��@��p
//p�����䳣��p�p,p���k�䳣��p�j 
    if(left < right) { 
        int s = number[(left+right)/2]; 
        int i = left - 1; 
        int j = right + 1; 

        while(1) { 
            while(number[++i] < s) ;  // �V�k�� 
            while(number[--j] > s) ;  // �V���� 
            if(i >= j) 
                break; 
            //printf("\n i=%d ,j=%d \n", i,j);
            SWAP(number[i], number[j]); 
                //for(int c = 0; c < MAX; c++) 
        		//	printf("%d ", number[c]); 
        } 
        quickSort(number, left, i-1);   // �索��i�滼�j 
        quickSort(number, j+1, right);  // ��k��i�滼�j 
    } 
} 


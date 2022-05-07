#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define MAX 7
#define SWAP(x,y) {int t; t = x; x = y; y = t;} 
void quickSort(int[], int, int); 
int main(void) { 
    srand(time(NULL)); 
    int number[MAX] = {61,26,50,38,97,7,8}; 
	   printf("排序前："); 
    int i;  
    for(i = 0; i < MAX; i++) { 
        printf("%d ", number[i]); 
    } 
    quickSort(number, 0, MAX-1); 
    printf("\n排序後："); 
    for(i = 0; i < MAX; i++) 
        printf("%d ", number[i]); 
    printf("\n"); 

    return 0; 
} 

void quickSort(int number[], int left, int right) { 
//數列中,選一數p
//p的左邊都比p小,p的右邊都比p大 
    if(left < right) { 
        int s = number[(left+right)/2]; 
        int i = left - 1; 
        int j = right + 1; 

        while(1) { 
            while(number[++i] < s) ;  // 向右找 
            while(number[--j] > s) ;  // 向左找 
            if(i >= j) 
                break; 
            //printf("\n i=%d ,j=%d \n", i,j);
            SWAP(number[i], number[j]); 
                //for(int c = 0; c < MAX; c++) 
        		//	printf("%d ", number[c]); 
        } 
        quickSort(number, left, i-1);   // 對左邊進行遞迴 
        quickSort(number, j+1, right);  // 對右邊進行遞迴 
    } 
} 


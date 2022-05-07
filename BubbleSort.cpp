#include<stdio.h>
#define MAX 7
void Bubblesort(int arr[],int n){
	int i,j,tmp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main(void) { 
    int number[MAX] = {61,26,50,38,97,7,8}; 
	   printf("排序前："); 
    int i;  
    for(i = 0; i < MAX; i++) { 
        printf("%d ", number[i]); 
    } 
    Bubblesort(number,MAX); 
    printf("\n排序後："); 
    for(i = 0; i < MAX; i++){
    	printf("%d ", number[i]); 
	}
    printf("\n"); 

    return 0; 
} 


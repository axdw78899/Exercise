#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
//列印1~10,除了array裡面的數
//且能依照參數b,別印出該區間的數字 
//0 1 2
//3 4 5
//6 7 8
//9 10
void function(int *in, int size);
void a1(int *a,int n,int b);

int main(){
	int a[SIZE]={2,4,6};
	a1(a,SIZE,3);
	
	return 0;
} 
//如果相符,array元素往下,不做事;
//如果不相符,print
void function(int *in, int size)
{
    int *ptr = in;
    int i;
    for (i=0; i<=10; i++) {
        if (*ptr == i)
	    ptr++;
	else
	    printf("%d\n", i);
    }
}
void a1(int *a,int n,int b){
	int *ptr=a;
	int i;
	while(*ptr < b*3){
		ptr++;
	}
	
	for(i=b*3 ;i<b*3+3;i++){
		if(*ptr==i)
			ptr++;
		else if(i>10)
			break;
		else
			printf("%d ",i);
	}
}

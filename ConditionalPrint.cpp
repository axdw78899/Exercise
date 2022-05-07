#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
//列印1~10,除了array裡面的數 
void function(int *in, int size);

int main(){
	int a[SIZE]={2,4,6};
	function(a,SIZE);
	
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

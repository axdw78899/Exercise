#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
//�C�L1~10,���Farray�̭����� 
void function(int *in, int size);

int main(){
	int a[SIZE]={2,4,6};
	function(a,SIZE);
	
	return 0;
} 
//�p�G�۲�,array�������U,������;
 //�p�G���۲�,print
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

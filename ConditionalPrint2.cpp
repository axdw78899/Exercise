#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
//�C�L1~10,���Farray�̭�����
//�B��̷ӰѼ�b,�O�L�X�Ӱ϶����Ʀr 
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

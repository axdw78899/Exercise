#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=20,*p,**pp;
	p=&n;//p���Ȭ��ܼ�n����} 
	pp=&p;//pp���Ȭ�����p���ܼ�, *pp���Ȭ��N�O��������pp�ҫ��V���ܼ�p�����e=n 
	printf("n=%d, *p=%d , **pp=%d\n",n,*p,**pp);
	printf("&n=%p, p=%p , *pp=%p\n",&n,p,*pp);
	printf("&p=%p, pp=%p \n",&p,pp);
	printf("&pp=%p \n",&pp);
	printf("\n");

	
	return 0;
}

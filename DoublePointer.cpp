#include<stdio.h>
#include<stdlib.h>

int main(){
	int n=20,*p,**pp;
	p=&n;//p的值為變數n的位址 
	pp=&p;//pp的值為指標p的變數, *pp的值為就是雙重指標pp所指向的變數p的內容=n 
	printf("n=%d, *p=%d , **pp=%d\n",n,*p,**pp);
	printf("&n=%p, p=%p , *pp=%p\n",&n,p,*pp);
	printf("&p=%p, pp=%p \n",&p,pp);
	printf("&pp=%p \n",&pp);
	printf("\n");

	
	return 0;
}

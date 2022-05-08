#include<stdio.h>
#include<stdlib.h>
//建node 
struct node 
{
   int data;
   struct node *next;
};
typedef struct node NODE;//struct node定義成NODE型態

int main(){
	NODE a,b,c; //宣告a,b,c為struct node型態的變數 
	NODE *ptr=&a;//ptr指向a
	
	a.data=12; //a的data 
	a.next=&b; //a的next指向下一個b 
	b.data=30;
	b.next=&c;
	c.data=64;
	c.next=NULL; //最尾接NULL 
	
	while(ptr!=NULL)
	{
		printf("address=%p,",ptr);//位置 
		printf("data=%d,",ptr->data);//下一個節點的位置 
		printf("next=%p\n",ptr->next);//ptr往下 
		ptr=ptr->next;
	}

	return 0;
}
 

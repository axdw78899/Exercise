#include<stdio.h>
#include<stdlib.h>
//��node 
struct node 
{
   int data;
   struct node *next;
};
typedef struct node NODE;//struct node�w�q��NODE���A

int main(){
	NODE a,b,c; //�ŧia,b,c��struct node���A���ܼ� 
	NODE *ptr=&a;//ptr���Va
	
	a.data=12; //a��data 
	a.next=&b; //a��next���V�U�@��b 
	b.data=30;
	b.next=&c;
	c.data=64;
	c.next=NULL; //�̧���NULL 
	
	while(ptr!=NULL)
	{
		printf("address=%p,",ptr);//��m 
		printf("data=%d,",ptr->data);//�U�@�Ӹ`�I����m 
		printf("next=%p\n",ptr->next);//ptr���U 
		ptr=ptr->next;
	}

	return 0;
}
 

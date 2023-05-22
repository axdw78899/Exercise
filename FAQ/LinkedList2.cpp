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
	int i,val,num;
	NODE *first,*current,*previous; //建立三個指向NODE的指標,頭,現在,前面 
	printf("Number of nodes: ");
	scanf("%d",&num);//NODE個數
	
	for(i=0;i<num;i++){
		current=(NODE*)malloc(sizeof(NODE));//配置記憶體空間 
		printf("Data for node %d :  ",i+1);
		scanf("%d",&(current->data));//有多少NODE 
		if(i==0)
			first=current; //只有一個NODE,本身就是頭尾 
		else
			previous->next=current;//前一個NODE的next指向目前的節點 
		current->next=NULL;//目前NODE的next指向NULL 
		previous=current;//前一個NODE設為目前的NODE 
	} 
	current=first;//設定 current 為第一個NODE 開始走訪 
	while(current!=NULL)
	{
		printf("address=%p, ",current);//print 位置 
		printf("data=%d, ",current->data);//print data 
		printf("next=%p\n",current->next);//print 下一個NODE的位置 
		current=current->next;
	}
	

	return 0;
}
 

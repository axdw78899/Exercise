#include<stdio.h>
#include<stdlib.h>
//建node 
struct node 
{
   int data;
   struct node *next;
};
typedef struct node NODE;//struct node定義成NODE型態
//function:
//建立
NODE *createList(int *,int);
//列印
void printList(NODE *);
//釋放
void freeList(NODE *);
//搜尋
NODE* searchNODE(NODE* first,int item); //回傳位置 
//插入 
void insertNODE(NODE* node,int item);
//刪除
NODE* deleteNODE(NODE* first,NODE* node); 


int main(){
    NODE *first,*node;
	int arr[]={12,34,56,78};
	first=createList(arr,4); //建立串列 
	printList(first);
	//測試搜尋插入 
	node=searchNODE(first,56);//找出56的位置
	insertNODE(node,87); 
	printList(first);
	//測試刪除 
	first=deleteNODE(first,first);//刪除第一個node 
	printList(first);
	
	first=deleteNODE(first,searchNODE(first,56));//刪除56
	printList(first);
	
	freeList(first);

	return 0;
}
//建立 
NODE *createList(int *arr,int len){
	int i;
	NODE *first,*current,*previous;
	for(i=0;i<len;i++){
		current=(NODE*)malloc(sizeof(NODE));//配置記憶體空間
		current->data=arr[i];//設定NODE的data
		if(i==0)
			first=current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
		
	}
	return first;
}
//列印 
void printList(NODE *first){
	NODE* node=first;//指向第一個NODE
	if(first==NULL)//如果是空的,印出 沒東西 
		printf("List is empty\n");
	else//否則 走訪 
	{
		while(node!=NULL)
		{
			printf("%3d",node->data);
			node=node->next;
		}
		printf("\n");
	}
}
//釋放記憶體
void freeList(NODE *first){
	NODE *current,*tmp;
	current=first;// current指向第一個node 
	while(current!=NULL)
	{
		tmp=current;//暫存目前的node 
		current=current->next;//將current指向下一個node 
		free(tmp);//釋放 
	}
}
//搜尋 
NODE* searchNODE(NODE* first,int item){
	NODE* node=first;//建立一個NODE連到Linklist的first上 
	while(node!=NULL){
		if(node->data==item) //看NODE是否等於搜尋的NODE  
			return node;//是 回傳NODE 
		else
			node=node->next;//否 接下去找 
	}
	return NULL;//找無 
}
//插入 
void insertNODE(NODE* node,int item){
	NODE* newnode;//建立一個new node
	newnode=(NODE*)malloc(sizeof(NODE));//new node的位置 
	newnode->data=item;//new node的data設為item
	newnode->next=node->next;//舊node的next給new node
	node->next=newnode;//舊node的next接上new node 
	//完成連結 

}
//刪除 
NODE* deleteNODE(NODE* first,NODE* node){
	NODE *ptr=first;
	if(first==NULL)
	{
		printf("Nothing to delete\n");
		return NULL;
	}
	if(node==first)//如果要刪除的是第一個node 
		first=first->next;//直接把node指向下一個node就好 
	else
	{
		while(ptr->next!=node)//找到要刪除的node的前一個node 
			ptr=ptr->next;
		ptr->next=node->next; //重新設定ptr的next 
	}
	free(node);
	return first;

}




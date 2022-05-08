#include<stdio.h>
#include<stdlib.h>
//��node 
struct node 
{
   int data;
   struct node *next;
};
typedef struct node NODE;//struct node�w�q��NODE���A
//function:
//�إ�
NODE *createList(int *,int);
//�C�L
void printList(NODE *);
//����
void freeList(NODE *);
//�j�M
NODE* searchNODE(NODE* first,int item); //�^�Ǧ�m 
//���J 
void insertNODE(NODE* node,int item);
//�R��
NODE* deleteNODE(NODE* first,NODE* node); 


int main(){
    NODE *first,*node;
	int arr[]={12,34,56,78};
	first=createList(arr,4); //�إߦ�C 
	printList(first);
	//���շj�M���J 
	node=searchNODE(first,56);//��X56����m
	insertNODE(node,87); 
	printList(first);
	//���էR�� 
	first=deleteNODE(first,first);//�R���Ĥ@��node 
	printList(first);
	
	first=deleteNODE(first,searchNODE(first,56));//�R��56
	printList(first);
	
	freeList(first);

	return 0;
}
//�إ� 
NODE *createList(int *arr,int len){
	int i;
	NODE *first,*current,*previous;
	for(i=0;i<len;i++){
		current=(NODE*)malloc(sizeof(NODE));//�t�m�O����Ŷ�
		current->data=arr[i];//�]�wNODE��data
		if(i==0)
			first=current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
		
	}
	return first;
}
//�C�L 
void printList(NODE *first){
	NODE* node=first;//���V�Ĥ@��NODE
	if(first==NULL)//�p�G�O�Ū�,�L�X �S�F�� 
		printf("List is empty\n");
	else//�_�h ���X 
	{
		while(node!=NULL)
		{
			printf("%3d",node->data);
			node=node->next;
		}
		printf("\n");
	}
}
//����O����
void freeList(NODE *first){
	NODE *current,*tmp;
	current=first;// current���V�Ĥ@��node 
	while(current!=NULL)
	{
		tmp=current;//�Ȧs�ثe��node 
		current=current->next;//�Ncurrent���V�U�@��node 
		free(tmp);//���� 
	}
}
//�j�M 
NODE* searchNODE(NODE* first,int item){
	NODE* node=first;//�إߤ@��NODE�s��Linklist��first�W 
	while(node!=NULL){
		if(node->data==item) //��NODE�O�_����j�M��NODE  
			return node;//�O �^��NODE 
		else
			node=node->next;//�_ ���U�h�� 
	}
	return NULL;//��L 
}
//���J 
void insertNODE(NODE* node,int item){
	NODE* newnode;//�إߤ@��new node
	newnode=(NODE*)malloc(sizeof(NODE));//new node����m 
	newnode->data=item;//new node��data�]��item
	newnode->next=node->next;//��node��next��new node
	node->next=newnode;//��node��next���Wnew node 
	//�����s�� 

}
//�R�� 
NODE* deleteNODE(NODE* first,NODE* node){
	NODE *ptr=first;
	if(first==NULL)
	{
		printf("Nothing to delete\n");
		return NULL;
	}
	if(node==first)//�p�G�n�R�����O�Ĥ@��node 
		first=first->next;//������node���V�U�@��node�N�n 
	else
	{
		while(ptr->next!=node)//���n�R����node���e�@��node 
			ptr=ptr->next;
		ptr->next=node->next; //���s�]�wptr��next 
	}
	free(node);
	return first;

}




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
	int i,val,num;
	NODE *first,*current,*previous; //�إߤT�ӫ��VNODE������,�Y,�{�b,�e�� 
	printf("Number of nodes: ");
	scanf("%d",&num);//NODE�Ӽ�
	
	for(i=0;i<num;i++){
		current=(NODE*)malloc(sizeof(NODE));//�t�m�O����Ŷ� 
		printf("Data for node %d :  ",i+1);
		scanf("%d",&(current->data));//���h��NODE 
		if(i==0)
			first=current; //�u���@��NODE,�����N�O�Y�� 
		else
			previous->next=current;//�e�@��NODE��next���V�ثe���`�I 
		current->next=NULL;//�ثeNODE��next���VNULL 
		previous=current;//�e�@��NODE�]���ثe��NODE 
	} 
	current=first;//�]�w current ���Ĥ@��NODE �}�l���X 
	while(current!=NULL)
	{
		printf("address=%p, ",current);//print ��m 
		printf("data=%d, ",current->data);//print data 
		printf("next=%p\n",current->next);//print �U�@��NODE����m 
		current=current->next;
	}
	

	return 0;
}
 

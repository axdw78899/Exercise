#include<stdio.h>
#include<stdlib.h>
int main(){
	struct data
	{
    	char name[10];
    	int math;
    	int eng;
	} student,*ptr; //struct�ܼ� student,�H�Ϋ��V struct�ܼ� ������ptr 
	
	ptr=&student;//ptr���V struct�ܼ� student;
	printf("name:");
	gets(ptr->name);

	printf("math grade:");
	scanf("%d",&ptr->math);
	
	printf("english grade:");
	scanf("%d",&ptr->eng);
	
	printf("*************************\n");
	printf("name: %s\n",ptr->name);
	printf("math grade: %d\n",ptr->math);
	printf("english grade: %d\n",ptr->eng);
	
	return 0;
}

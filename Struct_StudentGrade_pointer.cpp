#include<stdio.h>
#include<stdlib.h>
int main(){
	struct data
	{
    	char name[10];
    	int math;
    	int eng;
	} student,*ptr; //struct變數 student,以及指向 struct變數 的指標ptr 
	
	ptr=&student;//ptr指向 struct變數 student;
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

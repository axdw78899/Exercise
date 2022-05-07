#include<stdio.h>
#include<stdlib.h>
//«Ønode 
int main(){
	
	struct data
	{
    	char name[10];
    	char sex;
    	int grade;
	} student;
	
	printf("name:");
	gets(student.name);
	printf("grade:");
	scanf("%d",&student.grade);
	
	printf("***********\n");
	printf("%s's grade is %d \n",student.name,student.grade);

	
	return 0;
}

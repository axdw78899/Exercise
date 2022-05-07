#include<stdio.h>
#include<stdlib.h>

int main(){
	struct student
	{
    	char name[10];
    	char sex;
    	int grade;
	} student;
	
	printf("name:");
	gets(student.name);
	printf("sex:");
	gets(student.sex);
	printf("grade:");
	scanf("%d",&student.grade);
	
	printf("***********\n");
	printf("%s's grade is %d \n",student.name,student.grade);

	
	return 0;
}

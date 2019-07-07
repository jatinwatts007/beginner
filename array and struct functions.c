#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	struct student
	{
		int roll_no;
		char name[20];
		int age;
	};
	clrscr();
	student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter %d student's roll no\n",i+1);
		scanf("%d",s[i].roll_no);
		printf("enter %d student name\n",i+1);
		scanf("%s",s[i].name);
		printf("enter %d student's age\n",i+1);
		scanf("%d",s[i].age);
	}
	getch();
}

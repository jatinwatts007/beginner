#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	typedef struct student
	{
		int roll_no;
		char name[20];
		int age;
	}STUDENT;
	STUDENT s;
	printf("roll no=");
	scanf("%d",&s.roll_no);
	printf("age=");
	scanf("%d",&s.age);
	printf("name=");
	scanf("%s",s.name);
	getch();
}

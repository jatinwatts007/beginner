
#include<stdio.h>
#include<conio.h>
enum bool fun(int a);
enum bool
{
	false,true
};
void main()
{
	enum bool b;
	char name[20];
	clrscr();
	b=fun(1);
	if(b==1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	getch();
}
enum bool fun(int a)
{
	if(a==1)
	return true;
	else
	return false;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	 char str1[10],c='n';
	clrscr();
	int i;
	printf("enter name");
	scanf("%s",str1);
	printf("enter any alphabet from the name to see its postion number");
	scanf("%c",&c);
	i= strchar (str1,c);
	printf("postion=%d",i);
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	clrscr();
	printf("enter your name\n");
	scanf("%s",str2);
	strcpy(str1,str2);
	printf("%s",str1);
	getch();
}

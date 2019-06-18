#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,l;
	clrscr();
	printf("enter five values\n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<2;i++)
	{
		l=a[i];
		a[i]=a[4-i];
		a[4-i]=l;
	}
	for (i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}

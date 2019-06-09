#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][5],i;
	clrscr();
	printf("enter five values in row1 of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[0][i]);
	}
	printf("enter five values in row2 of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[1][i]);
	}
	printf("sum of values in same colunm");
	for(i=0;i<5;i++)
	{
		a[2] [i]=a[0][i]+a[1][i];
		printf("\n%d",a[2][i]);
	}
	getch();
}

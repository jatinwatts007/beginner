#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],b[5],c[5],i;
	clrscr();
	printf("enter five values in array 'a'\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter five values array 'b'\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("values obtained by adding the values of array 'a' and 'b'of same postions\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}

		getch();
	}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a[10],item,c=0,i,j;
	clrscr();
	printf("enter 10 values in array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	searchagain:
	printf("enter number to see whether it is present in array or not\n");
	scanf("%d",&item);
	if(item>a[5])
	{
		for(i=6;i<10;i++)
		{
			if(item==a[i])
			{
				printf("this number is present in array");
				c++;
				break;
			}
		}
	}
	else
	{
		for(i=5;i>=0;i--)
		{
			if(a[i]==item)
			{
				printf("this number is present in array");
				c++;
				break;
			}
		}
	}
	if(c==0)
	{
		printf("this number is not present in array");
	}
	printf("\npress 1 to search again and 0 to exit\n");
	scanf("%d",&j);
	if(j==1)
	{
		goto searchagain;
	}
	else
	{
		exit(1);
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,u,n,m,l;
	clrscr();
	printf("enter value to see diamond of * containing valueXvalue *'s  \nvalue=");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
	{
		for(j=l-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=0;k<=j;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	       for(u=1;u<=l-1;u++)
	       {
			for(n=0;n<u;n++)
			{
				printf(" ");
			}
			for(m=l-1;m>=n;m--)
			{
				printf(" *");
			}
			printf("\n");
	       }
	       getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	clrscr();
	printf("enter value to see its factors\na=");
	scanf("%d",&a);
	if(a==0)
	{
		printf("infinite factors");
	}
	for(i=1;i<=a;i++)
	{
		if( a%i==0)
		{
			printf("%d",i);
			if(i!=a)
			{
				printf(",");
			}
		}
	}
	getch();
}

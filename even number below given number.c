#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("enter value to see even numbers below it\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("%d,",i);
		i++;
	}
	getch();
}

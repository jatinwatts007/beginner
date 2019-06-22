#include<stdio.h>
#include<conio.h>
void main()
{
       unsigned int i,n,fac=1;
	clrscr();
	printf("enter any value to see its factorial value\nvalue=");
	scanf("%u",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
		printf("answer=%u",fac);
	getch();
}

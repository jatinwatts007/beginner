#include<stdio.h>
#include<conio.h>
void main ()
{
	int a,b,c;
	clrscr();
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a ;
	a=b;
	b=c;

	printf("a=%db=%d",a,b);
	getch();
}

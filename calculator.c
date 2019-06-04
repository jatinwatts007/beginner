#include<stdio.h>
#include<conio.h>
void main()
{
	int c;
	float   a,b,d;
	clrscr();
	printf("{for multiplication press 1\nfor add press 2\nfor divide press 3\nfor subtract press 4}\n");
	scanf("%d",&c);
	printf("give 2 inputs\na=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	if(c==1)
	{
		d=a*b;
		printf("answer=%f",d);
	}
	if(c==2)
	{
		d=a+b;
		printf("answer=%f",d);
	}
	if(c==3)
	{
		if(b==0 || (a==0 && b==0))
		{
			printf("not defined");
		}
		else
		{
			d=a/b;
			printf("answer=%f",d);
		}
	}
	if(c==4)
	{
		d=a-b;
		printf("answer=%f",d);
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5,b=10;
	int*pa=&a;
	int*pb=&b;
	clrscr();
	printf("%d",++*pa);
	printf("\n%x",++pa);
	printf("\n%d",++*pb);
	printf("\n%x",++pb);
	printf("\n%d",a);
	printf("\n%x",pa);
	printf("\n%d",++*pa);
	getch();
}

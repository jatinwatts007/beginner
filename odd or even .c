#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("enter any value to check whether it is even or odd\na=");
	scanf("%d",&i);
	if (i%2==0)
		printf("%d This is a even number",i);
	else
		printf("This is a odd number");
	getch();
}

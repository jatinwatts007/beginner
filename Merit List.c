#include<stdio.h>
#include<conio.h>
void main()
{
	float a;
	clrscr();
	printf("enter marks obtained\n");
	scanf("%f",&a);
	if (a>=95)
	{
		printf("merit category");
	}
	else if(a>=60)
	{
		printf("first division");
	}
		else if(a>=45)
		{
			printf("second division");
		}
		else if(a>=36)
		{
			printf("third division");
		}
			else
				printf("fail");

	getch();
}

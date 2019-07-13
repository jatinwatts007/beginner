#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();
	start:
	printf("enter any weekday number\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("sunday");
			break;
		case 2:printf("monday");
		       break;
		case 3:printf("tuesday");
		       break;
		case 4:printf("wednesday");
		       break;
		case 5:printf("thursday");
		       break;
		case 6:printf("friday");
		       break;
		case 7:printf("saturday");
		       break;
		default:printf("enter any number between 1-7");

	 }
   printf("\nenter 1 to start again and enter 0 to close the program\n");
		 scanf("%d",&i);
		 if (i==1)
		 {
			goto start;
		 }
     getch();
     }


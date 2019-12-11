#include<stdio.h>
#include<conio.h>
void main()
{
	char a ;
	clrscr();
	printf("enter any alphabet to check whether its a vowel or consonent\n");
	scanf("%c",&a);
	switch (a)
	{
	case 'a':printf( "This is a vowel");
		 break;
	case 'e':printf( "This is a vowel");
		break;
	case 'i':printf( "This is a vowel");
		break;
	case 'o':printf( "This is a vowel");
		break;
	case 'u':printf( "This is a vowel");
	       break;

	default:printf( "This is a consonent");
		break;
	 }
	  getch();
}


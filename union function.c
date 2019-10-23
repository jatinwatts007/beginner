#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	union student
	{
		int roll_no;
		char section;
		float fees;
	};
	union student s;
	s.roll_no=1;
	s.section='a';
	s.fees=5000;
	printf("%f",s.roll_no);
	getch();
}

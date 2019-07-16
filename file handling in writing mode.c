#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char ch[20]={"pawan sharma"};
	clrscr();
	FILE *fp;
	int i;
	fp=fopen ("F1.txt","w");
	if(fp=="null")
	{
		printf("file can not open");
		getch();
		exit(1);
	}
	for (i=0;i<12;i++)
	{
		fputc (ch[i],fp);
	}
		fclose (fp);

	getch();
}

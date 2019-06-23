#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char ch;
	clrscr();
	FILE *fp;
	int i;
	fp=fopen ("F1.txt","r");
	if(fp=="null")
	{
		printf("file can not open");
		getch();
		exit(1);
	}
	ch=fgetc(fp);
	while(!feof(fp))
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose (fp);
	getch();
}

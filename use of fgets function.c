#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char ch;
	clrscr();
	FILE *fp;
	fp=fopen("F1.txt","r");
	if(fp=="null")
	{
		printf("file cannot open");
		getch();
		exit(1);
	}
	fgets(ch,strlen(ch),fp);
	while(fgets(ch,strlen(ch),fp)!="null")
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}

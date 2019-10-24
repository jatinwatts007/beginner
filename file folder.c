#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char ch[20]={"mayank watts"};
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
	for (i=0;i<strlen(ch);i++)
	{
		fputc (ch[i],fp);
	}
		fclose (fp);
		getch();
		char n;
	FILE *cp;
	cp=fopen("F1.txt","r");
	n=fgetc(cp);
	while(!feof(cp))
	{
		printf("%c",n);
		n=fgetc(cp);
	}
	fclose(cp);
	getch();
}

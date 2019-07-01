#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int a,b,c,n;
	clrscr();
	FILE *fp;
	fp=fopen("F2.txt","r");
	if(fp=="null")
	{
		printf("file cannot open");
		getch();
		exit(1);
	}
	fscanf(fp,"%d%d%d",&a,&b,&c);
	printf("a=%d,b=%d,c=%d",a,b,c);
	n=ftell(fp);
	printf("\n%d",n);
	fclose(fp);
	getch();
}

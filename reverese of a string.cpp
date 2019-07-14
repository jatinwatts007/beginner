#include<stdio.h>
#include<conio.h>
void rev(char *s);
void main()
{
	char str[10];
	clrscr();
	printf("enter words to see its reverse\n");
	gets(str);
	rev(str);
	printf("reverse of string is %s",str);
	getch();
}
void rev(char *s)
{
	char temp;
	int j,i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	for(j=0;j<i/2;j++)
	{
		temp=*(s+j);
		*(s+j)=*(s+(i-j-1));
		*(s+(i-j-1))=temp;
	}
}


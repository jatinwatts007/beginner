#include<stdio.h>
#include<conio.h>
int sum(int);
int average(int);
int a[5];
void main()
{
	int w,i,sum1,l;
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	w=sum();
	printf("sum=%d",w);
	l=average();
	printf("average=%d",l);
	getch();
}
int sum()
{
	int w=0,k;
	for(k=0;k<5;k++)
	{
		w=w+a[k];
	}
	return w;
	}

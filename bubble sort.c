#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5]={5,4,3,2,1},i,k,temp;
	clrscr();

	for(k=0;k<5;k++)
	{
		for(i=0;i<4;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;

			}

		}


	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}

	getch();
}

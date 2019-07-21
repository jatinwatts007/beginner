#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	int *ptr,i,n,sum=0;
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
	ptr=(int *) calloc (sizeof (int),n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		sum=sum+(*(ptr+i));
	}
	printf("sum of array is %d",sum);
	getch();
}

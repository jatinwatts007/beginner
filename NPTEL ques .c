#include<stdio.h>

main(){
	typedef int x[2];
	x myArray[3] = {1 ,2 ,3, 4,};
	printf ("%u",sizeof (myArray));
	printf(" %d",myArray[0][0]);
	
	return 0;
}

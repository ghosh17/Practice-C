#include<stdio.h>


int main()
{

	int x=1;
	int y=2;
	printf("x= %d, y= %d \n ",x,y);
	x=x^y;
	printf("x= %d \n",x);
	y=x^y;
	printf("y= %d \n",y);
	x=x^y;
	printf("x= %d \n",x);

	printf("x= %d, y= %d \n ",x,y);

	return 0;

}



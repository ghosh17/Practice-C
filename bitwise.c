//bitwise oppertunity 

#include<stdio.h>
int main()
{

	unsigned char a=5, b=9;//0000 0101,  0000 1001
	
	printf("a=%d, b=%d \n",a,b);//5 = 0000 0101,  9 = 0000 1001
	printf("a&b = %d \n", a&b);//0000 0001 = 1
	printf("a|b = %d \n", a|b);//0000 1101 = 13
	printf("a^b = %d \n", a^b);//0000 1100 = 12
	printf("~a = %d \n", ~a); // 1111 1010 = -6 
	printf("b<<1 = %d \n", b<<1); // 0001 0010 = 18
	printf("b>>1 = %d \n", b>>1); // 0000 0100 = 4

	printf("\n **************** \n");

	
	return 0;


}

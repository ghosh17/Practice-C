#include<stdio.h>
unsigned int reverse(unsigned int num);


int main()

{
	unsigned int num=5;
	unsigned int rev_num;
	rev_num=reverse(num);
	printf("num= %u, reverse bit num= %u", num,rev_num);
	printf("\n");

	return 0;
}


unsigned int reverse(unsigned int num)
{
	unsigned int temp;
	unsigned NO_OF_BITS=sizeof(num)*8;
	unsigned int i=0, reverse_num=0;
	
	for(i=0; i<NO_OF_BITS; i++)
	{
		temp = (num & (1<<i));
		if(temp==1)
		{
			reverse_num=reverse_num | (1<<((NO_OF_BITS-1)-i));
		}
		
	}

	return reverse_num;


	
}

//Hi

1.How to find if machine is little Endian or Big Endian
0x01234567 

little endian - ....23<-01

big endian - ....45<-67

#include<stdio.h>

int main()
{
    unsigned int num = 0x01234567;
    //I need a character beacuse it'll dvivde it 01 23 45 67 as char = 1 int = 4. 
    char *ptr=&num;
    
    //if 01 => big endian
    if(*ptr==0x0 && *ptr++==0x1)
    {
        printf("big");
        }
    //if 67 => little endian
    if(*ptr==0x67)
        printf("Little");
    return 0;
}

2)int *a;
  char *b;
  
  *a = 1;
  
  b = a;

  a ++;
  b ++;
  
  a == b ? printf("yes"):printf("no");
  
3) How to find odd or even in a single statement

int OddEven(int num)
{
char *oddeven[2] = {"even", "odd"};

printf(oddeven[num%2]);

}


4) 
void invertOrderBin(unit32_t num)
{
//00010010
//01001000
    unit32_t num1;
    num1=0;
    unit32_t check_bit;
    int i=0;
    int SIZE=sizeof(num)*8;
    for(i=0;i<SIZE;i++)
    {
         
        if(num&(1<<i))
        {
            num1=num1|(1<<((SIZE-1)-i));
        } 
    }
    return num1;
    
    
    
    
}

int *a;

sizeof(a);
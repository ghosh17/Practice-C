#include<stdio.h>
#include<string.h>
char * rev_str(char * str);

int main()

{
	
	char str[]="slaughter gang shit murder gang shit";
	//char rev_str[]=rev(str);
	printf("%s",rev_str(str));
	return 0; 


}



char * rev_str(char * str)

{
	int length=strlen(str)-1;
	int start=0;
	while(start<length)
	{
		str[start]=str[start]^str[length];
		str[length]=str[start]^str[length];
		str[start]=str[start]^str[length];
		start++;
		length--;
	}
	
	return str;

}

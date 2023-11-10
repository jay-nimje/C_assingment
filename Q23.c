u#include<stdio.h>
int main()
{
	char str[]="janvi";//str last null
	int i,length;
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("%d is length",length);
	
	return 0;
}

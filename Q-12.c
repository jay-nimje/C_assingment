//even odd

#include<stdio.h>
int main()
{
	int i,num;
	
	printf("Enter the 10 number :");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}

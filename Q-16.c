#include<stdio.h>
int main()
{
	int number,rem,rev=0,org;
	
	printf("Enter the number :");
	scanf("%d",&number);
	org=number;
	
	while(number!=0)
	{
		rem=number%10;
		rev=rev*10+rem;
		number=number/10;
	}
	printf("%d",rev);
	if(org==rev)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	return 0;
}

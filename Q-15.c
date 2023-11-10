#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3=n1+n2,end,i;
	
	printf("Enter how many series you want :");
	scanf("%d",&end);
	
	printf("Fibonacci series : %d\n %d\n %d\n",n1,n2,n3);
	
	for(i=1;i<=end;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		
		printf("%d \n",n3);
	}
	return 0;
}

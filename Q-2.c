#include<stdio.h>

int main(){
	
	char choice;
	printf("Enter + for Addition \n- for subtraction \n * for multiplication \n  / for division");
	
	int a1,a2,ans;
	
	printf("\nEnter your choice :");
	scanf("%c",&choice);
	
	printf("\nEnter a1 : ");
	scanf("%d",&a1);
	
	printf("Enter a2 :");
	scanf("%d",&a2);
	
	switch(choice)
	{
		case '+':
			ans=a1+a2;
			printf("Addition of two number :: %d");
			break;
			
		case '-':
			ans=a1-a2;
			printf("subtraction of two number :: %d");
			break;
			
		case '*':
			ans=a1*a2;
			printf("multiplication of two number :: %d");
			break;
			
		case '/':
			ans=a1/a2;
			printf("division of two number :: %d");
			break;
			
		default:
			printf("not valdit");				
	}
}

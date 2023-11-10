#include<stdio.h>
int main()
{
	int c;
	printf("1 for monday\n 2 for tuesday\n 3 wednesday \n 4 thursaday \n 5 friday \n 6 for saturday\n 7 sunday");
	printf("\n Enter your choice from above menu :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("monday");
			break;
		case 2:
			printf("tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
			printf("thursday");
			break;
		case 5:
			printf("friday");
			break;
		case 6:
			printf("saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
		printf("unavailable");	
		break;		
		
	}
	return 0;
}

#include<stdio.h>

int main()
{
    int num, rem, rev=0,large=0;

    printf("Enter any number: ");
    scanf("%d", &num);



    while(num!=0)
    {
        rem=num%10;
        if(rem>large)
        {
            large=rem;

        }
        num=num/10;
    }
    printf("%d", large);


    return 0;
}

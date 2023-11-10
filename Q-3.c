#include<stdio.h>
int main()
{
	int radius,length,breadth,sum,height,base,ans;
    float area;

    printf("Enter Radius : ");
    scanf("%d", &radius);
    
    printf("Enter Length :");
    scanf("%d",&length);
    
    printf("Enter Breadth :");
    scanf("%d",&breadth);
    
    printf("Enter Breadth :");
    scanf("%d",&base);
    
    printf("Enter Height :");
    scanf("%d",&height);
	
	sum = length * breadth;
    area = 3.14 * radius * radius;
    ans = (base * height)/2;
	
	//area of circle 
    printf("Area of Circle = %.2f \n",area);
    //area of rectangle
    printf("Area of Rectangle =%d \n",sum);
    //area of tringle
    printf("Area of tringle =%d \n",ans);

    return 0;
}

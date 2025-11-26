/*write a c program to perform addition and difference of two integers numbers and two real numbers*/

#include<stdio.h>

int main()
{
	int num1,num2,add,diff;
	float n1,n2,addition,difference;
	
	printf("enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	
	add=num1+num2;
	diff=num1-num2;
	printf("two integer numbers are %d %d",add,diff);
	
	printf("enter any two real numbers");
	scanf("%f%f",&n1,&n2);
	
	addition=n1+n2;
	difference=n1-n2;
	printf("two real numbers are %f %f",addition,difference);
	return 0;
}

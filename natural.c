/*write a c program to print sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter any positive number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("the sum is %d",sum);
}

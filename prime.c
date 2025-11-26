/*write a c program to check whether the given number is a prime number or not*/
#include<stdio.h>
int main()
{
	int n,c,i;
	printf("enter any positive number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;  
	}
	if(c==2)
	printf("the number is prime %d",n);
	else
	printf("the number isn't prime %d",n);
	
}

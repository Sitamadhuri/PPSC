/*write a c program to print the sum of digits in a given number*/
#include<stdio.h>
int main ()
{
	int num,sum=0,rem;
	printf("enter any positive number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum of all digits in given number is %d",sum);
}

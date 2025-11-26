/*write a c program to find fibbonaci series*/
#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("\nEnter any +ve integer");
	scanf("%d",&n);
	
	printf("\nFibonacci series is ");
	for(i=0;i<n;i++)
	printf(" %d",fib(i));
}
int fib(int x)
{
	if(x == 0 || x==1)
	return x;
	else 
	return fib(x-1) + fib(x-2);
}

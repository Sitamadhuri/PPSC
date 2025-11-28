/*write a c program to print wether given number is a palindrome or not*/
#include<stdio.h>
int main()
{
	int n1,rev=0,R,temp;
	printf("enter any positive integer value");
	scanf("%d",n1);
	temp=n1;
	while(n1!=0)
	{
		R=n1%10;
		rev=rev*10;
		n1=n1/10;
	}
	if(temp==rev)
	printf("the given nuber is a palindrome %d",temp);
	else
	printf("the given number is not a palindrome %d",temp);
	
}

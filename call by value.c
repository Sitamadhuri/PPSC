#include<stdio.h>
swap(int,int);
int main()
{
	int a,b;
	printf("Enter any 2 integers");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap %d %d",a,b);
	swap(a,b);
	printf("After swapping %d %d",a,b);
	
}
swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

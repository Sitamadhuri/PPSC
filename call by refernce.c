/*call by reference*/
#include<stdio.h>
swap(int*,int*);
void main()
{
	int a,b;
	printf("\n Enter any two integers");
	scanf("%d%d",&a,&b);
	printf("\nBefore swapping %d %d",a,b);
	swap(&a,&b);
	printf("\after swapping %d %d",a,b);
}
swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

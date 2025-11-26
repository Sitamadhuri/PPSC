/*write a c program to print average of 5 subject marks*/
#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	float average;
	printf("enter 5 subjects marks");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	average=n1+n2+n3+n4+n5/5;
	printf("average is%f",average);
	return 0;
}

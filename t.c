/*write a c program to perform addition and difference of two integers and real numbers*/
#include<stdio.h>
int main()
{
	int m1,m2,add,diff;
	float n1,n2,sum,sub;
	printf("enter two integers");
	scanf("%d%d",&m1,&m2);
	add=m1+m2;
	diff=m1-m2;
	printf("add is %d\n",add);
	printf("diff is %d\n",diff);
	printf("enter two real numbers\n");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("sum is %f\n",sum);
	printf("sub is %f",sub);
	return 0;
}

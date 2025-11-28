/*write a c program to print pascals triangle*/
#include<stdio.h>
int main()
{
	int i,j,val,rows;
	printf("enter no of rows");
	scanf("%d",&rows);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows-i;j++)
		printf(" ");
		val=1;
		for(j=0;j<=i;j++)
		{
			printf("4%d",val);
			val=val*(i-j)/(j+1);
		}
	        printf("\n");	
	}
}

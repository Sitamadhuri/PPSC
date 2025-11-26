/*write a c program to print whether the given matrix is lower triangular matrix or not */
#include<stdio.h>
int main()
{
	int lt[3][3],i,j,flag=1;
	printf("Enter the elements of Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i<j && lt[i][j]!=0) || (j<=i && lt[i][j]==0))
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	printf("\nthe matrix is a lower triangular matrix");
	else
	printf("\nthe matrix is not a lower triangular matrix");
	return 0;
}



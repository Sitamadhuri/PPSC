/*write a c program to find the sum of numbers using dynamic memory allocation malloc*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("\nEnter number of elements: ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("\nenter elements of array: ");
	for(i=0;i<n;++i)
	      scanf("%d",ptr+i);
	      
	for(i=0;i<n;++i)
	    sum = sum + *(ptr+i);
	    
	printf("Sum is %d",sum);
	return 0;
}

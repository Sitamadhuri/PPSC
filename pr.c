#include<stdio.h>
int main()
{
	int pr;
	float m;
	char ch;
	printf("enter an integer value");
	scanf("%d",&pr);
	
	printf("enter a decimal value");
	scanf("%f",&m);
	
	printf("enter any character value\n");
	scanf("%c",&ch);
	
	printf("integer value is %d\ndecimal number is %f\ncharater is %c",pr,m,ch);
	return 0;
}


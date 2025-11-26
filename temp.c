/*write a c program to convert fahrenheit to celsius and celsuis to fahrenheit*/
#include<stdio.h>
int main()
{
	float a,b,c,fh;
	printf("enter fahrenheit");
	scanf("%f",&a);
	 c=(a-32.0)*5.0/9.0;
	 printf("celsius is %f\n",c);
	 printf("enter celsius temperature");
	 scanf("%f",&b);
	 fh=(b+32.0)*9.0/5.0;
	 printf("fahrenheit is %f",fh);
	 return 0;
}
	 
	
	
	


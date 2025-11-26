/*write a c program to generate the electricity bill based of the following information
if units are 1 to 50 unit cost is 2.5rs and charge is 30rs
if units are 51 to 100 unit cost is 3rs and charge is 50rs
if units are 101 to 200 unit cost is 3.5rs and charge is 75rs
if units are 201 to 300 unit cost is 4rs and charge is 100rs
if units are more than 300 unit cost is 5rs and charge is 125rs*/
#include<stdio.h>
#include<math.h>
int main()
{
	int units;
	float uc,charge,total;
	printf("enter no of units consumed");
	scanf("%d",&units);
	if(units<=50)
	{
		uc=units*2.5;
		charge=30;
	}
	else if(units>=51 && units<=100)
	{
		uc=units*3;
		charge=50;
		}
	else if (units>=101 && units<=200)
	{
		uc=units*3.5;
		charge=75;
	}
	else if (units>=201 && units<=300)
	{
		uc=units*4;
		charge=100;
	}
	else
	{
		uc=units*5;
		charge=125;
	}
	total=uc+charge;
	printf("the total bill amount is %f",total);
	return 0;
}

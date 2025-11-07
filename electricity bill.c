/*Writer a C program to generate the eletricity bill based on the following information
If units are 1 to 50 units cost is Rs.2.50 and charge is Rs . 30.0
If units are 50 to 100 units cost is Rs.3.00and charge is Rs . 50.0
If units are 101 to 200 units cost is Rs.3.50 and charge is Rs .75.0
If units are 201 to 300 units cost is Rs.4.00 and charge is Rs . 100
If units are more than 300 units cost is Rs.5.00 and charge is Rs.500 */

#include<stdio.h>

int main()
{
	int units;
	float uc,charge,total;
	printf("enter no.of units cosumed");
	scanf("%d",&units);
	if (units<=50)
	{
		uc = units * 2.50;
		charge = 30;
	}
	else if (units>=51 && units<=100)
	{
		uc = units * 3.0;
		charge = 50;
	}
	else if (units >=101 && units<=200)
	{
		uc = units * 3.5;
		charge = 75;
	}
	else if (units>=201 && units<=300)
	{
		uc = units * 4.0;
		charge = 100;
	}
	else
	{
		uc = units * 5.0;
		charge = 125;
	}
	total = uc + charge;
	printf("The total electricity bill amount is %f",total );
	
}



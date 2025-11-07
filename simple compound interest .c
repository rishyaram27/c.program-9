//write a C program to calculate simple interest and compound interest
#include<stdio.h>
#include<math.h>              //pow(a,b)
int main()
{
	float p,t,r,year,si,ci;
	printf("enter principal amount");
	scanf("%f",&p);
	
	printf("/n enter time");
	scanf("%f",&t);
	
	printf("/n enter rate orf interest");
	scanf("%f",&r);
	
	si=(p*t*r)/100.0;
	ci=p*pow((1+r/100),t)-p;
	printf("\n the simple interest is%f",si);
	printf("\n the compound interest is %f",ci);
}
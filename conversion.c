//write a c program to convert fahrenheit to celeius and veisa versa

#include<stdio.h>
void main()
{
	float fahrenheit,celsius;
	
	printf("enter fahrenheit");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit-32.0)*(5.0/9.0);
	printf("celsius value is %f\n",celsius);
	
	printf("enter celsius");
	scanf("%f",&celsius);
	
	fahrenheit=celsius*(9.0/5.0)+32.0;
	printf("fahrenheit value is %f\n",fahrenheit);
}

// write a C program to find area of the circle 
#include <stdio.h> 
#define PI 3.14
int main()
{
	float r,a;
	printf("enter radius of the circle");
	scanf("%f",&r);
	a=PI*r*r;
	printf("area of the circle = %f\n",a);
	return 0;
}
//write a c program to find the area of the the triangle 
#include <stdio.h>
int main()
{
	float base,height,area;
	printf("enter the base of triangle");
	scanf("%f",&base);
	printf("enter the height of the triangle");
	scanf("%f",&height);
	area=0.5*base*height;
	printf("enter area of the triangle= %f\n",area);
	return 0;
}
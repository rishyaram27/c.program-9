//write a C program to find the area of the rectangle
#include<stdio.h>
int main()
{
	float lenght,breath,area;
	printf("enter the length of the rectangle");
	scanf("%f",&lenght);
	
	printf("enter the breath of the rectangle");
	scanf("%f",&breath);
	area=lenght*breath;
	printf("area of the rectangle=% f/n",area);
	return 0;
}
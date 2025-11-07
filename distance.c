//write a c program to find the distance travelled by an object
#include <stdio.h>
int main ()
{
	float u,t,a,d;
	printf("Enter the velocity:");
	scanf("%f",&u);
	
	printf("\nEnter time:");
	scanf("%f",&t);
	
	printf("\nEnter acceleration:");
	scanf("%f",&a);
	
	d=(u*t)+(a*t*t)/2;
	
	printf("\n The distance is%f",d);
	
}
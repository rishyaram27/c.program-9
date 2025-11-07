//write a c program to evaluate te following expression a/b*c-b+a*d/3
#include <stdio.h>
int main () 
{
	int a,b,c,d,E;
	printf("Enter the value of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	E=a/b*c-b+a*d/3;
	printf("\n The Result is %d",E);
}
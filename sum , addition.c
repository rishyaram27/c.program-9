//Write a c program to perform addition and difference of two integer numbers and real numbers

#include<stdio.h>

int main()
{
	int num1,num2,add,diff;
	float n1,n2,sum,sub;
	
	printf("enter any two integer numbers");
	scanf("%d%d",&num1,&num2);
	
	add=num1+num2;
	diff=num1-num2;
	printf("addition of two integer numbers are %d\n",add);
	printf( "subtraction of two integer numbers are %d\n",diff);
	
	printf("enter any two real number");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	printf("addition of two real number are %f\n",sum);
	printf("subraction of two real numbers are %f",sub);
}
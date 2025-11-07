// write a c program to print the sum of digits of a given number

#include <stdio.h>
int main()
{
	int num,sum=0,rem;
	printf("enter any postive integer number");
	scanf("%d",&num);
	while(num!=0)
	{
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	}
	printf("the sum of the digits if the given number is %d ",sum);
}
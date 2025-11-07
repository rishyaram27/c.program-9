// write a c program to print the reverse of the given number using while loop

#include <stdio.h>
int main ()
{
	int num,rev,rem;
	printf("enter any positive integer");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("the reverse of the given number is %d",rev);
}
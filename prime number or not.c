// write a c program to chcek whether the give number is prime number or not
#include<stdio.h>
int main()
{
	int num,count,i;
	printf("enter any positive integer number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
			count++;
		
	}
	if (count==2)
		printf("the given number is prime %d",num);
	else
		printf("the given number is not prime %d",num);
}
// write a C program to read 10 number and print sum of all the 10 number using array
#include<stdio.h>
int main()
{
	int num[10],i,sum=0;
	printf("enter ten integer numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	printf("the sum is %d",sum);
}
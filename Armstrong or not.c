// write a c program to chcek whether the given number is armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
	int num,rem,sum,temp,original,len=0;
	printf("enter any positive integer ");
	scanf("%d",&num);          //1234
	original=num;              //1234
	temp=num;                  //1234
	
	while(num!=0)             //1234    123        12        1      0
	{
		rem=num%10;           //4        3         2          1
		len++;               //1         2         3          4
		num=num/10;
	}
	while(temp!=0)          //1234      123        12           1         0
	{
		rem = temp%10;       //4        3         2        1
		sum = sum+pow(rem,len);
		temp = temp/10;
	}
	if(sum==original)
	printf("the given number is armstrong %d",original);
	else
	printf("the given number is not armstrong %d",original);
}
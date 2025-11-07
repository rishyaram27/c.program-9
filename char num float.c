#include<stdio.h>
int main()
{
	char ch;
	int num;
	float f;
	printf("enter any character");
	scanf("%c",&ch);
	
	printf("enter any integer value");
	scanf("%d",&num);
	
	printf("enter any decimal number");
	scanf("%f",&f);
	printf("character is %c/n integer value is %d\n decimal number is %f",ch,num,f );

}
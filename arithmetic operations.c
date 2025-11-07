// write a c program to perform arithmetic operations using switch

#include <stdio.h>
int main ()
{
	char op;
	int n1,n2,result;
	printf("enter any two integer number");
	scanf("%d%d",&n1,&n2);
    printf("enter any arithmetic operator");
    scanf("%c",&op);
switch(op)
{
case '+':
result=n1+n2;
printf("\n addition is %d ",result);
break;
case '-':
result=n1-n2;
printf("\n subraction is %d ",result);
break;
case '*':
result=n1*n2;
printf("\n multiplication is %d ",result);
break;
case '/':
result=n1/n2;
printf("\n division is %d ",result);
break;	
case '%':
result=n1%n2;
printf("\n modulus is %d ",result);
break;
default:
	printf("\n please enter only the arithmetic operators + - * / %");
}
}
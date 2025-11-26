/*write a c program to find fibanacci series using recurssion*/
// 0 1 1 2 3  5 8 13
#include<stdio.h>
int fib (int);
int main()
{
	int n;
	printf("\nenter any +ve value integer number");
	scanf("%d",&n);   //5
	printf("\nfibonacci series is");
	for(i=0;i<n;i++)       //0<5 1<5 2<5 3<5 4<5
       printf("%d",fib(i)); //0 1 1 2
}
int fib (int x)
{
	if (x==0||x==1)
	    return x;
	else
	    return fib(x-1)+ fib (x-2);
}



/*write a c program to find the maximum and minimum*/
#include<stdio.h>
int main()
{
	int a[10],i,min,max,n;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		  max=a[i];
		if(a[i]<min)
		   min=a[i];
	}
    printf( "min and max elements are %d %d",min,max);	
}
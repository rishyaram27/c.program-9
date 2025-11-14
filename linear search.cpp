//write a c program to search an element in the list using linear search
#include <stdio.h>
int main()
{
	int a[10],i,target,found=0;
	printf("\nEnter any 10 integer numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter an element to be searched:");
	scanf("%d",&target);
	for(i=0;i<10;i++)
	{
		if(target==a[i])
		{
			found=1;
			break;
		}
		
	}
	if(found==1)
	{
		printf("\nElement %d is found",target);
	}
	else
	{
		printf("\nElement %d is not found",target);
	}
}

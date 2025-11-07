// write a C program to perform mulitplication of two matrixs
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
	
	printf("enter the matrix sixe of A");
	scanf("%d%d",&r1,&c1);
	printf("\n enter the matrix sixe of A");
	for(i=0;i<c1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix sixe of B");
	scanf("%d%d",&r2,&c2);
	printf("enter the matrix sixe of B");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	if(r2!=c1)
	{
		printf("Matrix multplication is not possible...");
	}
	else
	{
		printf("\n the result of the matrix C \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
}
	

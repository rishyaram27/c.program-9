// write a c program to fnd the trace of the matrix
#include <stdio.h>
int main ()
{
	int mat[3][3],i,j,sum=0;
	printf("Enter the elements of a matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);	
		}
	}
	for(i=0;i<3;i++)
	{
		sum=sum+mat[i][i];	
	}
	printf("\nThe trace of a given matrix is %d",sum);
}
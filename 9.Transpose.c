#include<stdio.h>
void transpose()
{
	int i,j;
	int row,col;
	
	printf("Enter the no. of rows:");
	scanf("%d",&row);
	printf("Enter the no. of columns:");
	scanf("%d",&col);
	if(row<1 && col<1)
	{
		printf("Enter the valid size of matrix");
	}
	else
	{
		int a[row][col],b[col][row];
		printf("Enter the values for A:");
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				printf("a%d%d=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
			//printf("a%d%d = %d",i,j,a[i][j]);
			printf("b%d%d = %d\n",i,j,b[i][j]);
		}
	}
	}	
}
int main()
{
	transpose();
	return 0;
}

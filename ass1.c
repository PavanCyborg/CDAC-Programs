#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter the value of i:\n");
	scanf("%d",&i);
	printf("Enter the value of j:\n");
	scanf("%d",&j);
	if(i==20 || j==20)
	{
		printf("Atleast one variable is having 20\n");
	}
	else
	{
		printf("Both variables are not having 20\n");
	}
	if(i<=40 && j<=40)
	{
		
		printf("i is less than or equal to 40 and j is less than or equal to 40\n");
	}
	else
	{
		printf("Both are not less than or equal to 40\n");
	}
return 0;
}
		

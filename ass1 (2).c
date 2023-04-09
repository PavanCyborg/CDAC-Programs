#include<stdio.h>
int fact(int n)
{
	int product=1;
	if (n==0 || n==1)
		return 1;
	else
	{
		while(n>0)
		{
			product =product*n;
			n--;
		}
		return product;
	}
}

int main()
{
	int n,r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of r:");
	scanf("%d",&r);
	int z=fact(n)/fact(n-r);
	printf("The result is :%d",z);
	return 0;
}


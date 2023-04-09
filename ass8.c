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
int nPr(int n,int r)
{
	return fact(n)/fact(n-r);
}
int nCr(int n,int r)
{
	return fact(n)/(fact(n-r)*fact(r));
}

int main()
{
	int n,r;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the value of r:");
	scanf("%d",&r);
	if(n>r)
	{
		int z=nPr(n,r);
		int x=nCr(n,r);
		printf("The result of nPr is :%d \n",z);
		printf("The result of nCr is :%d \n",x);
	}
	else
	{
		printf("invalid values");
	}
	
	return 0;
}

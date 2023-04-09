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
int GCD(int a,int b)
{
	a=(a>0) ? a:-a;
	b=(b>0) ? b:-b;
	
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return a;
}
int main()
{
	int a,b;
	printf("Enter the values of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("The fact of %d is :%d \n",a,fact(a));
	printf("The fact of %d is :%d \n",b,fact(b));
	printf("GCD of %d & %d is: %d",a,b,GCD(a,b));
	return 0;
}

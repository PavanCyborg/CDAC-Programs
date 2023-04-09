#include<stdio.h>
float fact(int n)
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
	float sum=0;
	printf("Enter the First no:");
	scanf("%d",&n);
	printf("Enter the last no:");
	scanf("%d",&r);
	while(n!=r)
	{	
		if(n%3!=0)
		{
		sum =sum+(n/fact(n));
		n++;
		}
		else
		{
			sum=sum-(n/fact(n));
			n++;
		}
	}
	printf("The result is :%f",sum);
	return 0;
}


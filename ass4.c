#include<stdio.h>
double factorial(int n)
{
	int j;
	int fact=1;
	if (n==0 || n==1)
	{
		return 1;
	}
	else
	{
	/*
		for(j=1;j<=n;j++)
		{
			fact=fact*j;
		}
	*/
		for(j=n;j>1;j--)	//Both functions work 1st is incrementing &2nd is decrementing...
		{
			fact=fact*j;
		}
		
		return fact;
		
	}
}
int main()
{
	int i;
	int x;
	printf("enter for which no. you want to know factorial:");
	scanf("%d",&i);
	x=factorial(i);
	printf("factorial is :%d",x);
	return 0;
}


	

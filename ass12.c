#include<stdio.h>
int isprime(int n)
{
	int a;
	for(a=2;a<=n-1;a++)
	{
		if (n%a==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	printf("Enter for what value you need to find prime no.s:");
	scanf("%d",&n);
	printf("The prime number below %d are:\n",n);
	while(n!=1)
	{
		if(isprime(n)==1)
		{	
			
			printf("%d \n",n);
			n--;
		}
		else 
		{
			n--;
		}
	}
	
	return 0;
}


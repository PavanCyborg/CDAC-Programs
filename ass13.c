#include<stdio.h>
int main()
{
	int n,sum=0,m;
	printf("Enter the no. :");
	scanf("%d",&n);
	if(n==0)
	{
		printf("sum will be %d itself....",n);
	}
	else
	{
		while(n>0)
		{
			m=n%10;
			sum+=m;
			n=n/10;
		}
		printf("Sum is %d \n",sum);
	}
	return 0;
}


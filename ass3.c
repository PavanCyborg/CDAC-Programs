#include <stdio.h>

int main()
{
	int i,j,sum=0;
	printf("Enter the value of j:\n");
	scanf("%d",&j);
	for (i=1;i<=j;i++)
	{
		if(i%5==0)
		{	
			continue;
		}
		else
		{
			sum=sum+i;
		}
	}
	printf("Result is : %d \n",sum);
return 0;
}

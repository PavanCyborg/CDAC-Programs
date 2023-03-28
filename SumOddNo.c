//5. Develop a C program to find the sum of all odd numbers upto N using a while loop.

#include<stdio.h>
int main()
{
	int a,b,sum=0;
	printf("Enter the lower limit:");
	scanf("%d",&a);
	printf("Enter the upper limit:");
	scanf("%d",&b);
	while(a<=b)
	{	
		if(a%2!=0) 
			sum=sum+a;
		//i++;
		a++;
	}
	printf("Result is:%d",sum);
	
	return 0;
}


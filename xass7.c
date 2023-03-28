#include<stdio.h>
#include<math.h>
int power(int base,int exp);
int isArmstrong(int k)
{
	int n=0,sum=0,remainder=0,num;
	float result;
	num=k;
	for(num = k;num!=0;++n)
	{
		num=num/10;
	}
	for(num=k;num!=0;n/=10)
	{
		remainder=num%10;
		result =result+power(remainder,n);
	}
	if((int)result==k)
	{
		return 0;
	}
	else
		return 1;
	
	return sum;
}
int power(int base,int exp)
{
	int result =1;
	if (base==0 && exp==0)
	{
		printf("Undefined");
		
	}
	else if(exp==0)
	{
		return 1;
	}
	
	else
	{
		for(exp;exp>0;exp--)
		{	
			result=result*base;
		}
		return result;
	}
}
int main()
{
	int i,z;
	printf("Enter any no. to find whether it is armstrong or not:");
	scanf("%d",&i);
	z=isArmstrong(i);
	//printf("%d",z);
	if (z==0)
	{
		printf("the given no. %d is arstrong no.:",i);
	}
	//comehere:
	else
	{	
		
		printf("the given no. %d is not an armstrong no.:",i);
	}
	return 0;
}

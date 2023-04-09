#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 1;
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int i;
	printf("Enter a no. to find factorial:\n");
	scanf("%d",&i);
	printf("the factorial is: %d\n",fact(i));
	return 0;
}

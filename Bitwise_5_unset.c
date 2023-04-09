#include<stdio.h>
int main()
{
	int a,n,res;
	printf("Enter any no.:");
	scanf("%d",&a);
	printf("Enter the position you want to unset:");
	scanf("%d",&n);
	res=  a& ~(1<<n);
	printf("%d",res);
	return 0;
}

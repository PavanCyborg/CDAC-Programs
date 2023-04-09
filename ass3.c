#include <stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the value for a:");
	scanf("%d",&a);
	
	printf("Enter the value for b::");
	scanf("%d", &b);
	(a>b) ? printf("a is higher than b") : (a==b) ? printf("a is equal to b") : printf("a is less than b");
	/*
	if (a>b)
		printf("a is higher");			These all functions are performed in single line (line 11).
	else if(a==b)
		printf(" a is equal to b");
	else 
		printf(" a is less than b");
	*/
	return 0;
}


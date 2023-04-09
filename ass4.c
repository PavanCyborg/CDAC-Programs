#include<stdio.h>
int main()
{
	int option;
	int a,b;
	printf("Enter the operation you want to perform: \n1.Add \n2.Subtract \n3.Multiplication \n");
	scanf("%d",&option);
	if (option!=1 || option!=2 || option!=3)
	{
		goto defaultcase;
	}
	else
	{	
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	printf("Enter the value of b:\n");
	scanf("%d",&b);
	}
	switch(option)
	{
		case 1: printf("Result of addition :%d\n",a+b);
		break;
		case 2: printf("Result of Subtraction : %d\n",a-b);
		break;
		case 3: printf("Result of multiplication :%d\n",a*b);
		break;
		defaultcase:
		default: printf("Invalid Option...");
	}
	return 0;
}

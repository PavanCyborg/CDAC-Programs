#include <stdio.h>
int main()
{
	int a,b;
	//float c;
	printf(" Add any no a:\n");
	scanf("%d",&a);
	
	printf(" Add any no b: \n");
	scanf("%d",&b);
	
	printf("addition is : %d \n",a+b);
	printf("subtraction is: %d \n",a-b);
	printf("multiplication is: %d \n", a*b);
	printf(" Division is : %f \n", (float)a/b);
	printf(" Modulus is : %d\n", a%b);
	return 0;
}


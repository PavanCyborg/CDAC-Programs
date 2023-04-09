#include<stdio.h>
float SimInt(int x,int y,float z)
{
	float SI;
	SI=(x*y*z)/100;
	printf("%.2f\n",SI);
	return SI;
}
int main()
{
	int p,t;
	float r;
	printf("Principle Amount:");
	scanf("%d",&p);
	printf("Time Period:");
	scanf("%d",&t);
	printf("rate of intrest:");
	scanf("%f",&r);
	
	float c=SimInt(p,t,r);
	printf("Total amount after adding intrest is: %0.2f \n",c+p);
	
	return 0;
}

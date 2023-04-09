#include<stdio.h>
int pow(int base,int exp)
{
    int res=1;
    for(int i=0;i<exp;i++)
    {
        res=res*base;
    }
    return res;
}
int main()
{
	int a;
	scanf("%d",&a);
	int n;
	scanf("%d",&n);
	//rotate left shift
	int c=a*pow(2,n);
	if(c==(1<<n))
		printf("True");
	else
		printf("False");
	int d=a/pow(2,n);
	if(d==(1>>n))
		printf("True");
	else
		printf("False");
	return 0;
}

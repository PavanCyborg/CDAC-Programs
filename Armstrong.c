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
int count_digit(int n)
{
    int m,cnt=0;
    while(n>0)
    {
        m=n%10;
		cnt++;
		n=n/10;
    }
    return cnt;
}
int main()
{
    int num,digit,n,result=0;
    printf("Enter any no.:");
    scanf("%d",&n);
    int count=count_digit(n);
    printf("%d\n",count);
    num=n;
    while(num!=0)
    {
        digit=num%10;
        result +=pow(digit,count);
        num=num/10;
    }
    if(result==n)
    {
        printf("%d is an armstrong no.",n);
    } 
    else
    {
        printf("%d is not an armstrong no.",n);
    }
    return 0;
}
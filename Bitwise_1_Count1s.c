#include<stdio.h>
void count_1(int n)
{
    int num=n;
    int count=0;
    while(n>0)
    {
        if(n&1)
            count++;
        n=n>>1;
    }
    printf("No of 1s in %d is %d",num,count);
}
int main()
{
    int n;
    scanf("%d",&n);
    count_1(n);
    return 0;
}

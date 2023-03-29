#include <stdio.h>
int multiply(int x,int y)
{
    return x*y;
}
float Division(float x,float y)
{
    if(x>y)
        return x/y;
    else if(x==y)
        return 1;
    else
        return y/x;
}
int fact(int n)
{
    if(n ==0)
        return 1;
    else
        return n*fact(n-1);
}
int square(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return x*x;
}
int main()
{
    int i,j,c;
    printf("Enter the value of i: \n");
    scanf("%d",&i);
    printf("Enter the value of j: \n");
    scanf("%d",&j);
    printf("Enter your choice: \n 1.Multiplication \n 2.Division \n 3. Factorials \n 4.Squares \n");
    scanf("%d",&c);
    switch(c)
    {   
        case 1:printf("%d",multiply(i,j));
        break;
        case 2:printf("%.2f",Division((float) i,(float) j));
        break;
        case 3:printf("factorial of %d and %d are : %d and %d respectively",i,j,fact(i),fact(j));
        break;
        case 4:printf("Square of %d and %d are : %d and %d respectvely",i,j,square(i),square(j));
        break;
        default:printf("Invalid Options...");
    }
    return 0;
}

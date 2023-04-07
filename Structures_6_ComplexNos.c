/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct complexNo
{
    float real;
    float imag;
}complex;
complex add(complex n1,complex n2)
{
    complex sum;
    sum.real=n1.real+n2.real;
    sum.imag=n1.imag+n2.imag;
    return sum;
}
complex Sub(complex n1,complex n2)
{
    complex diff;
    diff.real=n1.real-n2.real;
    diff.imag=n1.imag-n2.imag;
    return diff;
}
complex prod(complex n1,complex n2)
{
    complex Prod;
    Prod.real=n1.real*n2.real - n1.imag*n2.imag;
    Prod.imag=n1.real*n2.imag - n1.imag*n2.real;
    return Prod;
}
int main()
{
    complex n1,n2,res;
    scanf("%f %f",&n1.real,&n1.imag);
    scanf("%f %f",&n2.real,&n2.imag);
    int opt;
    printf("Enter your choice: 1.add \t 2.Subtract \t 3.Product \n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:res=add(n1,n2);
        printf("sum is %.1f+i %.1f",res.real,res.imag);
        break;
        case 2:res=Sub(n1,n2);
        printf("difference is %.1f+i %.1f",res.real,res.imag);
        break;
        case 3:res=prod(n1,n2);
        printf("product is %.1f+i %.1f",res.real,res.imag);
        break;
        default:printf("Enter valid options...");
    }
    
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#define fact(n) while(n>0)\
                {\
                    f=f*n;\
                    n--;\
                }\
                printf("%d\n",f);

int main()
{
    int n,f=1;
    printf("Enter any no. :\n");
    scanf("%d",&n);
    fact(n);
    return 0;
}
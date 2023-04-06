/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i=0;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int s[n];
    while(i<n)
    {
        s[i]=i;
        
        printf("%d\n",s[i]);
        i++;
    }
    printf("Size of array is : %ld",sizeof(s));
    return 0;
}

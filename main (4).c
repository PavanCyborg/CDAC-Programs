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
    int n,i;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int s[n],t[n];
    while(i<n)
    {
        scanf("%d",&s[i]); //Entering Elements of array.
        i++;
    }
    printf("Size of array is : %ld\n",sizeof(s));
    i=0;
    while(i<n)
    {
        t[i]=s[n-1];
        n--;
        printf("%d \t",t[i]);
    }
    return 0;
}

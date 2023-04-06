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
    int n,i,sum=0;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int s[n];
    while(i<n)
    {
        scanf("%d",&s[i]);//Entering Elements of array.
        sum+=s[i];
        i++;
    }
    float Avg=sum/n;
    printf("Size of array is : %ld\n",sizeof(s));
    printf("Sum of Elements is: %d\n",sum);
    printf("Avg of Elements is: %.2f \n",Avg);
    return 0;
}

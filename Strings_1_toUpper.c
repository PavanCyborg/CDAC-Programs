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
    char  s[20];
    int i=0;
    printf("Enter the string:");
    gets(s);
    //printf("%d %c",s[1],s[1]);
    while(s[i]!='\0')
    {
        //temp=s[i];
        if( s[i]>64 &&  s[i]<91)
        {
            i++;
        }
        else if( s[i]>96 && s[i]<123)
        {
            s[i]=s[i]-32;
            i++;
        }
    }
    printf("%s",s);
    
    return 0;
}

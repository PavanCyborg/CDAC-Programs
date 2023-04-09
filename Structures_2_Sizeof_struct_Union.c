/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct abc{
    int a;
    char b;
}x;
union cde{
    int a;
    char d;
}y;
int main()
{
    printf("size of structure :%ld \n size of union :%ld",sizeof(x),sizeof(y)); 
    return 0;
}

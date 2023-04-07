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
    char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
    printf("the array color is of size :%d is having %d no of elements\n",sizeof(*color),strlen(color));
    printf("%p\n",color);//starting address of array color
    printf("%p\n",color+2);//Adds address of array with 2 
    printf("%s\n",*color);//prints value stored in starting address of array
    printf("%s\n",*(color+2));//prints value stored in 2 addresses after starting of array
    printf("%s\n",color[5]);//value of 5th element of array
    printf("%s\n",*(color+5));//value of element stored at location of 5 addresses after startig element
    return 0;
}

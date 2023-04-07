/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}};
    printf("Meaning of table is it is an floating point matrix with 2 rows and 3 columns...\n");
    printf("value of (table+1) :%i\n",table+1); //Pointing to value of index 1. Initially pointer points to index 0.
    printf("value of *(table):%p\n",*(table)); //Gives starting address of table array.
    printf("value of *(table+1):%p\n",*(table+1)); //gives address of table array of index 1.
    printf("value of (*(table+1)+1) :%p\n",(*(table+1)+1));//gives value of (address of (table+1)+1)
    printf("Value of (*(table)+1) is :%p\n",(*(table)+1));//gives value of (address of table + 1)
    printf("Value of  *(*(table+1) +1) is : %p\n", *(*(table+1))+1);//First takes address(table+1) and adds with 1 and then returns the address of result.
    printf("Value of  *(*(table)+1) is: %p\n", *(*(table)+1));//(address of table)+1 is stored in another variable result is the address of this variable.
    printf("Value of  *(*(table+1) is : %p\n", *(*(table+1)));//address(address(table+1))
    printf("Value of  *(*(table)+1)+1 is : %p\n", *(*(table) + 1)+1);//address((address(table)+1)+1)
    return 0;
}

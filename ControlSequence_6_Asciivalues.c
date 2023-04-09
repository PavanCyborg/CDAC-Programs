//6. Write a program to print ASCII values of upper case and lower case alphabets and digits (A-Z, a-z and 0-9).
#include<stdio.h>
int main()
{
	char ch;
	for(ch=48; ch<=57; ch++)
	{
		printf("%d is ascii value of %c\n",ch,ch); // Upper case Alphabets
	}
	for(ch=65; ch<=90; ch++)
	{
		printf("%d is ascii value of %c\n",ch,ch); // lower case alphabets
	}
	for(ch=97; ch<=122; ch++)
	{
		printf("%d is ascii value of %c\n",ch,ch); // numbers 1-0
	}
	/*for(ch=58; ch<=64; ch++)
	{
		printf("%d is ascii value of %c\n",ch,ch); // Special characters.
	}*/
return 0;
}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
void toLower(char *str1)
{
	int i;
	for(i=0;i<strlen(str1);i++)
	{
		*(str1+i)=tolower(*(str1+i));
	}
	printf("Lower case of str1 is: %s",str1);
}
void toUpper(char *str2)
{
	int i;
	for(i=0;i<strlen(str2);i++)
	{
		*(str2+i)=toupper(*(str2+i));
	}
	printf("Lower case of str2 is: %s",str2);
}	
int main()
{
	char str1[100],str2[100];
	printf("Enter the string 1:\n");
	scanf("%s",str1);
	printf("Enter the string 2:\n");
	scanf("%s",str2);
	toLower(str1);
	toUpper(str2);
	return 0;
}

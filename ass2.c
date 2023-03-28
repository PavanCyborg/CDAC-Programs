#include <stdio.h>
int main()
{
	char c;
	printf("Enter any character A B D F:\n");
	scanf("%c",&c);
	if (c=='A'||c=='a'||c=='B'||c=='b'||c=='D'||c=='d'||c=='F'||c=='f')
	{
		switch(c)
		{
			case 'A': printf("A for Apple\n");
			break;
			case 'a': printf("A for Apple\n");
			break;
			case 'B': printf("B for Bat\n");
			break;
			case 'b': printf("B for Bat\n");
			break;
			case 'D': printf("D for Dog\n");
			break;
			case 'd': printf("D for Dog\n");
			break;
			case 'F': printf("F for Fan\n");
			break;
			case 'f': printf("F for Fan\n");
			break;
			label:
			default:printf("character not in range\n"); 
		}
	}
	else
	{
		goto label;
	}
	return 0;
}

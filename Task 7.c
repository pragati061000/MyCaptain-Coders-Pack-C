#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[10],str2[10];
	
	printf("Enter a string:");
	scanf("%s",&str1);
	strcpy(str2,str1);
	strrev(str2);
	printf("--------------------------------------------");
	if(strcmp(str1,str2)==0)
	{
		printf("\n%s is a palindrome string.",str1);
	}
	else
	{
		printf("\n%s is not a palindrome string.",str1);
	}
	
	getch();
}

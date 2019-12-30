#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char fname[10],lname[10];
	
	printf("Enter your First name: ");
	scanf("%s",&fname);
	printf("Enter your last name: ");
	scanf("%s",&lname);
	strcat(fname,lname);
	printf("Your full name is: %s",fname);
	
	getch();
}

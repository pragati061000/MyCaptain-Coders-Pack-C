#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10],phn_no[10];
	int age;
	
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Enter your age:");
	scanf("%d",&age);
	printf("Enter your phone number:");
	scanf("%s",&phn_no);
	printf("\n-------------------------------\n");
	printf("\nDetails of a person is:\n");
	printf("\nName:%s",name);
	printf("\nAge:%d",age);
	printf("\nPhone number:%s",phn_no);
	
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int num, digit, rev;
	
	printf("Enter the  number:");
	scanf("%d",&num);
	
	do
	{digit=num%10;
	rev=rev*10+digit;
	num=num/10;
	}while(num!=0);
	
	printf("Reverse of the number is:%d",rev);
	
	getch();
}

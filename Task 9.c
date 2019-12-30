#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*fact(n-1));
	}
}
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,fact(n));
	
	getch();
}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num,n=0,sum=0,rem,a,b;
	
	printf("Enter the digit:");
	scanf("%d",&num);
	a=num;
	b=num;
    do
	{
		a=a/10;
		n++;
	}	while(a>0);
	while(b>0)
	{
		rem=b%10;
		sum=sum+pow(rem,n);
		b=b/10;
	}
	printf("-----------------------------------------------");
	if(sum==num)
	{
		printf("\n%d is an Armstrong no.",num);
	}
	else
	{
		printf("\n%d is not an Armstrong no.",num);
	}
	
	getch();
}

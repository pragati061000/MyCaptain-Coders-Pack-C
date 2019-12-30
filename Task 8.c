#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	
	printf("Enter the number of which you want the table to be printed:");
	scanf("%d",&n);
	printf("\nTable of %d is given below:",n);
	printf("\n");
	for(i=1;i<11;i++)
	{
		printf("\n%d*%d = %d",n,i,n*i);
	}
	
	getch();
}

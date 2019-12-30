#include<stdio.h>
#include<conio.h>
void main()
{
	int sub1,sub2,sub3,sum;
	float avg;
	
	printf("Enter the marks of first subject:");
	scanf("%d",&sub1);
	printf("Enter the marks of second subject:");
	scanf("%d",&sub2);
	printf("Enter the marks of third subject:");
	scanf("%d",&sub3);
	sum=sub1+sub2+sub3;
	avg=sum/3;
	printf("\nTotal marks in all three subjects is: %d",sum);
	printf("\nAverage of the marks of all three subjects is: %f",avg);
	
	getch();
}

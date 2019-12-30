#include<stdio.h>
#include<conio.h>
void main()
{
	int ch;
	float c,f;
	
	printf("\n1.CELSIUS TO FAHRENHEIT");
	printf("\n2.FAHRENHEIT TO CELSIUS");
	printf("\n3.EXIT");
	printf("\n--------------------------------");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	printf("--------------------------------");
	switch(ch)
	{
		case 1: printf("\nEnter the temprature in celsius:");
				scanf("%f",&c);
				f=(9/5)*c+32;
				printf("Temperature in fahrenheit is : %f",f);
				break;
				
		case 2: printf("\nEnter the temprature in fahrenheit:");
				scanf("%f",&f);
				c=5*(f-32)/9;
				printf("Temperature in celsius is : %f",c);
				break;
				
		case 3: printf("\nExiting");
				break;
		
		default: printf("\nWRONG CHOICE");
	}
}

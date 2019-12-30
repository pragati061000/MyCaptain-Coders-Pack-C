#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius, fahrenheit;
	
	printf("Enter the temperature in celsius:");
	scanf("%f",&celsius);
	fahrenheit= (9/5)*celsius + 32;
	printf("\nCoversion of the temperature is as follows");
	printf("\n\n%f Celsius = %f Fahrenheit",celsius, fahrenheit);
	
	getch();
}

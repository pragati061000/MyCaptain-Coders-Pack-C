#include<stdio.h>
struct book
{
	char title[100];
	char author[100];
	char genre[100];
}b;
void display()
{
	printf("\nTitle of the book : %s",b.title);
	printf("\nAuthor of the book : %s",b.author);
	printf("\nGenre of the book : %s",b.genre);
}
void read()
{
	printf("Enter the title of the book:");
	gets(b.title);
	printf("Enter the author of the book:");
	gets(b.author);
	printf("Enter the genre of the book:");
	gets(b.genre);
}
int main()
{
	read();
	printf("--------------------------------------------------------");
	display();
	return 0;
}

// book.c -- one book inventory

#include <stdio.h>

#define MAXTITL 41	// maximum length of title + 1
#define MAXAUTL 31	// maximum length of author's name + 1

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void) {

	struct book library;

	printf("Please enter the book title: \n");
	gets(library.title);
	
	printf("\nEnter the author of the book: \n");
	gets(library.author);

	printf("\nEnter the value of the book: \n");
	scanf("%f", &library.value);
	
	// Note: program will display warning because of gets()
	// ignore warning and continue with program process
	printf("\n%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");

	return 0;
}



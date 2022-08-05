#include <stdio.h>
#include "string.h"

#define MAXSIZE 1024
#define EXIT_SUCCESS 0


int main(int argc, char *argv[])
{
	char a[MAXSIZE];
	char b[MAXSIZE];

    printf("Enter the first string: \n");
	scanf("%s", a);
	print("Enter the second string: \n");
	scanf("%s", b);

	/* Using iteration */
	printf("USING ITERATION \n");
	printf("a = a: %d\n", strcmp(a, a));
	printf("b = b: %d\n", strcmp(b, b));
	printf("a < b: %d\n", strcmp(a, b));
	printf("b > a: %d\n", strcmp(b, a));
	
	printf("\n");

	/* Pointer Arithmetic */
	printf("USING POINTERS \n");
	printf("a = a: %d\n", strcmp_p(a, a));
	printf("b = b: %d\n", strcmp_p(b, b));
	printf("a < b: %d\n", strcmp_p(a, b));
	printf("b > a: %d\n", strcmp_p(b, a));

	
	return EXIT_SUCCESS;
}

#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
#define EXIT_SUCCESS 0

int main(int argc, char **argv)
{
	char name[BUFFER_SIZE];
	printf("Enter your name: ");
	scanf("%s", name);

	printf("Hello, %s\n", name);
	return EXIT_SUCCESS;
}

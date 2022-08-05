#include <stdio.h>
#include "string.h"

#define EXIT_SUCCESS 0
#define MAXSIZE 1024

int main(int argc, char *argv[])
{
	char s[MAXSIZE], t[MAXSIZE];

	printf("Enter the first string: \n");
	scanf("%s", s);

	printf("Enter the second string: \n");
	scanf("%s", t);

	strcp(s, t);
	printf("Amended String: %s\n", s);


	strcp_p(s, t);
	printf("Amended String: %s\n", s);
	return EXIT_SUCCESS;
}

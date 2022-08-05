#include <stdio.h>
#include "string.h"

#define EXIT_SUCCESS 0;

int str_len(char s[]);
int str_len_p(char s[]);

int main(int argc, char *argv[])
{
	char s[MAXSIZE];
	
	printf("Enter text: \n");
	scanf("%s", s);

	printf("Length using iteration: %d\n", str_len(s));
	printf("Length using pointers: %d\n", str_len_p(s));
 
 
   	return EXIT_SUCCESS;
}



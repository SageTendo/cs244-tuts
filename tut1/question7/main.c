#include <stdio.h>
#include "scanner.h"
#include "stack.h"

#define EXIT_SUCCESS 0
#define MAXSIZE 1024

int main(int argc, char *argv[])
{
	int c;
	char s[MAXSIZE];
	char res[MAXSIZE];

	while ((c = getop(s)) != EOF) {
		if (c == TOK_NUM) {
			if (is_empty() || (peek() == '(')) {
				push(c);
			}


		} else if (TOK_ADD <= c && TOK_DIV >= c) {
			
		}
	}

}

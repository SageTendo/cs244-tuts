#include <stdio.h>
#include "scanner.h"


int getop(char s[])
{
	int c;

	/* Skip whitespaces */
	do {} while ((c = getchar()) == ' ');

	/* return EOF if encountered */
	if (c == EOF) 
		return EOF;

	/* process char from stdin */
	if (c >= 48 && c <= 57) {
		int i;

		i = 0;
		do {
			if (c < 48 || c > 57) {
				ungetc(c, stdin);
				break;
			}
			s[i++] = c;
		} while ((c = getchar()) != EOF);
		s[i] = '\0';
	} else {
		switch(c) {
			case '+':
				return TOK_ADD;
			case '-':
				return TOK_SUB;
			case '/':
				return TOK_DIV;
			case '*':
				return TOK_MUL;
			case '\n':
				return TOK_EOL;
			default:
				/* Invalid Op: Return the character encountered */
				return c;
		}
	}
	return TOK_NUM;
}

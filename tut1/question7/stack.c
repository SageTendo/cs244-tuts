#include "stack.h"

#define MAXSIZE 1024

/* Stack fields */
char s[MAXSIZE];
int ptr = 0;

void push(double f)
{
	if (ptr + 1 < MAXSIZE) {
	    s[ptr++] = f;
	}
}

double pop(void)
{
	if (ptr - 1 >= 0) {
	    return s[--ptr];
	} 
	return 0;
}


int peek(void)
{
	if (!is_empty()) {
		return s[ptr-1];
	}
	return -1;
}

int is_empty(void)
{
	return ptr == 0;
}

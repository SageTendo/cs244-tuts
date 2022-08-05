#include "stack.h"

#define MAXSIZE 1024

/* Stack fields */
char s[MAXSIZE];
int ptr = 0;

void push(double f)
{
    // Check if there's still space to add a number to the stack
	if (ptr + 1 < MAXSIZE) {
	    s[ptr++] = f;
	}
}

double pop(void)
{
    // Check if popping a number would cause a segmentation fault.
	if (ptr - 1 >= 0) {
	    return s[--ptr];
	} 
	return 0;
}

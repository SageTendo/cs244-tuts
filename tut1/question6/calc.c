#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "scanner.h"

#define MAXSIZE 1024
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

int main(int argc, char **argv)
{
	char s[MAXSIZE];
	int op;

	while ((op = getop(s)) != EOF) {
		if (op == TOK_NUM) { 
	        //push number to stack if TOK_NUM is returned by the scanner
			double num = atoi(s);
			push(num);
		} else if (TOK_ADD <= op && TOK_MUL >= op) {
	        /*
	            Pop numbers from stack if an operator token is returned by the scanner and perform
	            the specified operation and push the result onto the stack.
	            Stack representation:
            	            |   | <- ptr
	                        | y |
	                        | x |
	        */
	        
			double y = pop();
			double x = pop();
            
			switch(op) {
				case TOK_ADD:
					push(x+y);
					break;
				case TOK_SUB:
					push(x-y);
					break;
				case TOK_DIV:
					push(x/y);
					break;
				case TOK_MUL:
					push(x*y);
					break;
			}
		} else if (op == TOK_EOL) {
		    //Pop the last value pushed to the stack (The result of the calculation) and print.
			double val = pop();
			printf("Ans: %f\n\n", val);
		} else {
		    //Terminate the program when an invalid character is provided.
			printf("Invalid Op: %c\n", op);
			return EXIT_FAILURE;
		}
	}
	return EXIT_SUCCESS;
}

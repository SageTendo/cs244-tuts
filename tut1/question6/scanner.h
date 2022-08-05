#ifndef SCANNER_H
#define SCANNER_H

/* token definitions */
#define TOK_ADD 0
#define TOK_SUB 1
#define TOK_MUL 2
#define TOK_DIV 3
#define TOK_NUM 4
#define TOK_LPAR 5
#define TOK_RPAR 6
#define TOK_EOL 7

/* prototypes */
int getop(char s[]);


#endif

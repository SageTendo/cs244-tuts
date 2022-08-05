#include "string.h"


void strcp(char s[], char t[])
{
	int i;
	for (i=0; s[i] != '\0'; i++) {
		continue;
	}
	
	int j;
	j = 0;
	while (t[j] != '\0') {
		s[i+j] = t[j];
		j++;
	}
	s[i+j] = '\0';
}

void strcp_p(char s[], char t[])
{
	char *sp, *tp;
	sp = &s[0];
	tp = &t[0];

	while (*sp != '\0') {
		sp++;
	}

	while (*tp != '\0') {
		*sp = *tp;
		tp++;
		sp++;
	}
	*sp = '\0';
}

#include "string.h"

/* Iteratively compare two strings */
int strcmp(char s[], char t[])
{
	int i;
	for (i=0; s[i] != '\0' || t[i] != '\0'; i++) {
		if (s[i] < t[i]) {
			return -1;
		} else if (s[i] > t[i]) { 
			return 1;
		} 
	}
	return 0;
}

/* Compare two strings using pointer arithmetic */
int strcmp_p(char s[], char t[]) 
{
	char *sp, *tp;
	sp = &s[0]; //Point to the address of the first item in s
	tp = &t[0]; //Point to the address of the first item in t

    /*
        Loop through arrays until a termination char is met or when *sp != *tp.
    */
	while (*sp != '\0' || *tp != '\0') {
    	//  Compare the values being pointed to.
		if (*sp < *tp) {
			return -1;
		} else if (*sp > *tp) {
			return 1;
		}
		
		// Increment both pointers to point to the next address
		sp++;
		tp++;
	}
	return 0;
}

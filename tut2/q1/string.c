#include "string.h"

/*
    Iteratively count the length of string s
*/
int str_len(char s[])
{
	int i;
	for (i = 0; i < MAXSIZE; i++) {
		if (s[i] == '\0') {
			return i + 1;
		}
	}
	return 0;
}

/*
    Count the length of string s using pointer arithmetic
*/
int str_len_p(char s[])
{
	char *p;
	p = &s[0];  // Point to the memory address of the first item in s
    
    //Point to the following item until the item at the address p is pointing to is '\0'
   	while (*p != '\0') {
		p++;
	}
    
    // Subtract the current address value from the address of the first item in s and add 1
	return (p - &s[0]) + 1;
}

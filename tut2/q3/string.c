#include "string.h"


/* Iteratively copy string t to string s */
void strcp(char s[], char t[])
{
	int i;
	for (i=0; s[i] != '\0'; i++) {
		/*
			Find index of termination character in s
			This is where we will start appending string t to string s
		*/
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

/* Copy string t to string s using pointer arithmetic */
void strcp_p(char s[], char t[])
{
	char *sp, *tp;
	sp = &s[0]; //Point to the address of the first item in s
	tp = &t[0]; //Point to the address of the first item in t

	while (*sp != '\0') {
		/*
			Find index of termination character in s
			This is where we will start appending string t to string s
		*/
		sp++;
	}

	while (*tp != '\0') {
		*sp = *tp; //Set the value of sp to the value of tp
		//Increment pointers to point to the next addresses
		tp++;
		sp++;
	}
	*sp = '\0'; //set value of current pointer to the termination character.
}

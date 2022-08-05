#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1024
#define EXIT_SUCCESS 0

/* Prototypes */
int get_line(char s[]);
void copy(char to[], char from[]);


int main(int argc, char **argv)
{
	int i, c;
	int buffr_index, buffr_size, curr_line_size, largest_line_size;
	char buffer[MAXLINE], curr_line[MAXLINE], largest_line[MAXLINE];

	/* Read chars from stdin and store to a buffer */
	buffr_index = 0;
	while ((c = getchar()) != EOF) {
		buffer[buffr_index++] = c;
	}
	buffr_size = buffr_index;
	buffer[buffr_index] = '\0';
	
	/* Iterate through buffer and store each character to curr_line until '\n' is found */
	i = 0;
	buffr_index = 0;
	largest_line_size = 0;
	while (buffr_index <= buffr_size) {
		if (buffer[buffr_index] == '\n') {
			curr_line[i] = '\0';
			i = 0; /* Reset the curr_line_index */

			curr_line_size = get_line(curr_line);
			if (curr_line_size > largest_line_size) {
				largest_line_size = curr_line_size;
				copy(largest_line, curr_line);
			}
		}
		/* add current char at buffr_index to curr_line and increment both indices.
		curr_line[i++] = buffer[buffr_index++];
	}

	/* Print the largest line */
	printf("\n");
	printf("Largest Line: %s\n", largest_line);
	return EXIT_SUCCESS;
}

/* Returns the length of string 's' */
int get_line(char s[])
{
	int str_index;

	str_index = 0;
	while (s[str_index] != '\0') {
		str_index++;
	}
	return str_index;
}

/* Copy string 'from' to string 'to' */
void copy(char to[], char from[])
{
	int i;
	for (i = 0; i < MAXLINE; i++) {
		if (from[i] == '\0') {
			to[i] = '\0';
			break;
		}
		to[i] = from[i];
	}
}

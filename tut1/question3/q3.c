#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define TRUE 1

int main(int argc, char **argv)
{
	int c;
	int prev_c;
	int lines;
	int words;
	int chrs;

	lines = 0;
	words = 0;
	chrs = 0;
	
	FILE *fp;

	if (argc != 2) {
		printf("File arg not included..\n");
		return 1;
	}

	fp = fopen(argv[1], "r");
	while (TRUE) {
		c = fgetc(fp);
		if (feof(fp)) {
			break;
		}

		chrs += 1; //increment the number of chars read
		switch (c) {
			case ' ':
				if (prev_c == c) { //Avoid counting a word if the prev char was also a space
					break;
				}
				words += 1;
				break;
			case '\n':
				lines += 1;
				words += 1;
				break;
		}
		prev_c = c; //keep track of previous char
	}
	fclose(fp);

	printf("Chars: %d\nLines: %d\nWords: %d\n\n", chrs, lines, words);
	return EXIT_SUCCESS;
}

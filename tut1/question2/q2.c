#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define LOWER 0
#define UPPER 200
#define STEP 20

int main(int argc, char **argv)
{
	float fahr, celsius;
	
	if (argc == 4) {
		int lower = atoi(argv[1]);
		int upper = atoi( argv[2]);
		int step  = atoi(argv[3]);
	   
	   	printf("TEST:%d\n%d\n%d\n%d\n", argc, lower, upper, step);


		for (fahr = lower; fahr <= upper; fahr=fahr+step) {
			celsius = 5 * (fahr - 32) / 9;
			printf("%6.2f\t%6.2f\n", fahr, celsius);
		}
	} else {
		for (fahr = LOWER; fahr <= UPPER; fahr=fahr+STEP) {
			celsius = 5 * (fahr - 32) / 9;
			printf("%6.2f\t%6.2f\n", fahr, celsius);
		}
	}
	return EXIT_SUCCESS;
}

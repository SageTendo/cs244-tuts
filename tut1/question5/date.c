#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define BUFFER_SIZE 1024
#define EXIT_SUCCESS 0

/* prototypes */
void date_str_split(char date[], char y[], char m[], char d[]);
int zeller_congruence(char y[], char m[], char d[]);

char DAYNAMES[][10] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
int DAYS[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char **argv)
{
	char date[BUFFER_SIZE], y[5], m[3], d[3];
	int h; //Day of the week as given by Zeller's Congruence

	printf("Enter a date: ");
	scanf("%s", date); //Get input from commandline
	
	/* Split date string to different arrays */
	date_str_split(date, y, m, d);
	h = zeller_congruence(y, m, d);

	printf("DAY: %s\n", DAYNAMES[h]);
	return EXIT_SUCCESS;
}


/*
    Takes a dates as string and splits its values to separate arrays
    Parameters:
        date[]: the string format of the date (yyyy/mm/dd)
        y[]: the year taken from date
        m[]: the month taken from date
        d[]: the day taken from date

*/
void date_str_split(char date[], char y[], char m[], char d[])
{
	int i;
	for (i = 0; date[i] != '\0'; i++) {
		/* 
            date format:    yyyy/mm/dd 
		    i values:       0123/56/89
		*/
		if (i < 4) {
			y[i] = date[i];
		} else if (i > 4 && i < 7) {
		    /*  
		        Take the modulo of i%5 to be the index 
		        Fixing the indexing to store the characters from the beginning of array m
		    */
			m[i%5] = date[i];
		} else if (i > 7) { 
		    /*  
		        Take the modulo of i%5 to be the index 
		        Fixing the indexing to store the characters from the beginning of array d
		    */
			d[i%8] = date[i];
		}
	}
	
	//Add termination character
	y[4] = '\0';
	m[2] = '\0';
	d[2] = '\0';
}

/*
    Calculate the day of the week using Zeller's Congruence
*/
int zeller_congruence(char y[], char m[], char d[])
{
	int day, mon, year;

	/* String to Int conversion */
	year = atoi(y);
	mon = atoi(m);
	day = atoi(d);
	
	return (day + ((26*(mon+1))/10) + year + (year/4) +
	(6*(year/100)) + (year/400)) % 7;
}

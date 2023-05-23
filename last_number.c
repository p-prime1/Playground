#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Checks for last digit
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	j = n % 10;
	if (j > 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, j);
	}
	else if (j < 6 && j != 0)
	{
		printf("The last digit of %d is %d and is less than 6 and is not 0\n", n, j);
	}
	else if (n == 0)
	{
		printf("The last digit of %d is %d and is 0", n, j);
	}

	/* your code goes there */
	return (0);
}

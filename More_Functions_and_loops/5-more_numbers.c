#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */


int main(void)
{
    more_numbers();
    return (0);
}

void more_numbers(void)
{
	int i, j;
	j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
	}
	_putchar('\n');
	
}

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{	
		_putchar('\n');
	}
	else
	{
	int i;

	i = 0;

	while (i < n)
	{
		_putchar(' ');
	}
	}
	_putchar('\\');
	_putchar('\n');
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}

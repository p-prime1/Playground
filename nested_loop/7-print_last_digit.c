#include "main.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-1024);
	print_last_digit(INT_MAX);
	print_last_digit(INT_MIN);
	print_last_digit(1);
}
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n);
	return n;
}

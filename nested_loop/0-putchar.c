#include "main.h"

/**
 * main - Prints _putchar to stdout
 * Return: Always 0;
 */

int main (void)
{
	int i;
	char j[8] = "_putchar";
	
	for (i = 0; j[i] != '\0'; i++)
	{
		_putchar(j[i]);
	}
	_putchar('\n');
	return 0;
}

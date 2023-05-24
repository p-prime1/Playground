#include <stdio.h>

/**
 * main - Prints letters in upper and lower case
 * Return: Always 0;
 */

int main(void)
{
	int i,j,k,l;
	j = 'z';

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(i);
		/*for (k = 'a'; k <= 'z'; k++)
		{
			k = l;
		}
		*/
		while (j >= 'a')
		{
			putchar(j);
			putchar(' ');
			j--;
			break;
		}
	}
	putchar('\n');
	return 0;
}

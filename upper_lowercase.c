#include <stdio.h>

/**
 * main - Prints letters in upper and lower case
 * Return: Always 0;
 */

int main(void)
{
	int i,j,k,l;
	j = 'a';

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
		/*for (k = 'a'; k <= 'z'; k++)
		{
			k = l;
		}
		*/
		while (j <= 'z')
		{
			putchar(j);
			putchar(' ');
			j++;
			break;
		}
	}
	putchar('\n');
	return 0;
}

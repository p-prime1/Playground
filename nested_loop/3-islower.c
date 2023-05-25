#include "main.h"

int main (void)
{
	_islower('H');
	_islower('c');
	_islower('o');
	_islower(108);
	_islower('c');
	_islower('I');
	_islower('s');
	_islower(70);
	_islower(20);
	_islower('U');
	_islower('n');
	_islower(0);
	_islower('H');
	return 0;
}
int _islower(int c)
{
	int i;
	int j;

	/*for (j = 'A'; j <= 'Z'; j++)
	{
		if (c == j)
		{
			_putchar(0 + '0');
			break;
		}
		else
		{
			continue;
		}
	}

	for (i = 'a'; i <= 'z'; i++)
		{
			if ( c == i)
			{
				_putchar(1 + '0');
				break;
			}
			else
			{
				continue;
			}
		}
		*/
	if (c >= 'a' && c <= 'z')
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
	_putchar('\n');
}

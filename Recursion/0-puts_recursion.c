#include <stdio.h>
#include <stdlib.h>

int _puts_recursion(char *s)
{
	if (*s == '\0')
		return (1);
	else
	{
		putchar(*s);
		_puts_recursion(s +1);
	}
	putchar('\n');

}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

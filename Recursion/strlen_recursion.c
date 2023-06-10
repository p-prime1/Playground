#include <stdio.h>

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}


#include "main.h"

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

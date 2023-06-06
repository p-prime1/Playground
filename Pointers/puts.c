#include "main.h"

void _puts(char *str)
{
	int i;

	while (*str[i] != '\0')
	{
		putchar(*str[i] + '0');
		i++;
	}
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}


#include "main.h"

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		++i;
	}

	for (--i; i >= 0; --i)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i;

	char passwd[] = "tobe";

	while (sizeof(*argv) == sizeof(passwd))
	{
		if (*argv[i] == passwd[i])
		{
			continue;
		}
		else
		{
			printf("Incorrect password");
			break;
		}
	}
	putchar(argc + '0');
	return (0);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with: %d\n", argv[0]);

	if (argc > 1)
		{
			for (count = 1; count < argc; count++)
			{
				printf("argv[%d] = %s\n", count, argv[count]);
			}
		}
	else
	{
		printf("The command had no arguments\n");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int i;
	int j;
	
	j = 0;
	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i][0]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				j += atoi(argv[i]);
			}
		}
	}
	printf("%d\n", j);
	return (0);
}


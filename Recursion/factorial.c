#include <stdio.h>

int factorial(int n)
{
	int i;
	int res;

	i = 1;
	for (res = 1; i <= n; i++)
	{
		res = res * i;
	}
	return (res);
}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	putchar('\n');
	return (0);
}


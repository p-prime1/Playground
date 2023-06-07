#include <stdio.h>

unsigned int factorial(unsigned int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

int main(void)
{
	int i;

	i = 5;
	printf("Factorial of %d is %d\n", i, factorial(i));
	return (0);
}

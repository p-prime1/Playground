#include <stdio.h>

int sum_digit(int n);

int sum_digit(int n)
{
	if (n == 0)
		return 1;
	return (n % 10) + sum_digit(n / 10);
}

int main(void)
{
	int n;

	printf("%d\n" ,sum_digit(567));
	return (0);
}


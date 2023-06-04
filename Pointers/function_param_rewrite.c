#include <stdio.h>

int param_rewrite(int *m)
{
	printf("Address of m: %p\n", &m);
	*m = 2;
}
int main(void)
{
	int n;
	int *p;

	n = 42;
	p = &n;
	printf("Address of n: %p\n", &n);
	printf("Address of p: %p\n", &p);
	printf("Value of n before calling the function: %d\n", n);
	printf("Value of p: %p\n", p);
	param_rewrite(p);
	printf("Value of n aftercalling the function: %d\n", n);
	return (0);
}

#include <stdio.h>

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Value of n:%d\n", n);
	printf("Value of p:%p\n", p);
	printf("Address of n:%p\n", &n);
	*p = 402;
	printf("Value of n after dereferencing:%d\n", n);
	return (0);
}

#include <stdio.h>

int main(void)
{
	int n;
	char c;
	int *p;

	n = 98;
	p = &n;
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %li bytes\n", sizeof(float));
	printf("Size of type 'long int', unsigned int: %lu , %lu bytes\n", sizeof(long int), sizeof(unsigned int));
	c = 'a';
	printf("Value of 'n': %d\n", n);
	printf("Address of 'n' and: %p\n" ,&n);
	printf("Address of 'c':%p\n", &c);
	printf("Address of 'p': %p\n", &p);
	*p = 510;
	printf("Value of n after dereferencing is: %p\n", n);
	return (0);
}

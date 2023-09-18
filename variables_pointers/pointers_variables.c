#include <stdio.h>
/**
 * main - storing address of variables to pointers
 * Return: always 0 success
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("the value of n is %d\n", n);
	printf("the address of n is %p\n", &n);
	printf("the address of p is %p\n", &p);
	printf("the value of p is %p\n", p);

	return (0);
}


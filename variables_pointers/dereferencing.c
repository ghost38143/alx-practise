#include <stdio.h>
/**
 * main - deferencing pointers
 * Return: always 0 success
 */
int main (void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("the value of p is : %p\n", p);

	p = 402;

	printf("the value of p is: %p\n", p);

	return (0);
}

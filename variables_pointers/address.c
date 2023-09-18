#include <stdio.h>
/**
 * main - checking the addresses of variables
 * Return: always 0 (success)
 */
int main(void)
{
	char c;
	int n;

	printf("the address of c: %p\n", &c);
	printf("the address of n %p\n", &n);

	return (0);
}


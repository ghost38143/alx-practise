#include <stdio.h>
/**
 * main - checking the size of variables
 * Return: always 0 success
 */
int main(void)
{
	int n;

	printf("the size of 'int' is : %lu bytes\n", sizeof(int));
	printf("the size of 'char' is : %lu bytes\n", sizeof(char));
	printf("the size of 'float' is : %lu bytes\n", sizeof(float));
	printf("the size of my variable n on my computer is %lu bytes\n", sizeof(n));

	return (0);
}

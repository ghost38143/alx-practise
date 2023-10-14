#include <stdio.h>
#include <stdarg.h>

int print_number(int arg, ...);

/**
 * main - printing numbers of function
 * Return: always 0 success
 */
int main(void)
{
	print_number(4, 7, 8, 3, 12);
	return (0);
}

/**
 * print_number - this function enables printing number
 * @arg: the fisrt argument: tell the number remaining
 * @...: the rest of the argument
 * Return: the value
 */
int print_number(int arg, ...)
{
	va_list args;

	int i;
	va_start(args, arg);

	for(i = 0; i < arg; i++)
	{
		int x = va_arg(args, int);
		printf("x: %d\n", x);

	}
	va_end(args);
	return (0);
}

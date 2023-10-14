#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - this function print numbers with aseparator
 * @separator: the the quotation ,
 * @n: the first argument
 * @..: the rest of the argument
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for(i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

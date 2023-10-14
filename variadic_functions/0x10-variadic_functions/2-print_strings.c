#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - this function prints a string
 * @separator: pointer to a comma
 * @n: the first argument
 * @...: the rest of the argument
 * Return: zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");

		}
		else
		{
			printf("%s", str);
		}
		if (i < n-1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adding the values of the string
 * @n: the first argment
 * @...: the rest of the argument
 * Return: value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;
	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

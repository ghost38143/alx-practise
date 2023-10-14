#include <stdio.h>
#include <stdarg.h>

int max(int num_args, ...);
/**
 * main - call the maximum number
 * Return: o always success
 */
int main(void)
{
	int max_num = max(5, 26, 17, 4, 0, 13);
	printf("max_num: %d\n", max_num);
	return (0);
}
/**
 * max_num - tis function finds the maximum number
 * @num_args: the first argument
 * @...: the rest of the argument
 * Return: value
 */
int max(int num_args, ...)
{
	va_list args;
	int i;

	va_start(args, num_args);
	int max = 0;
	for (i = 0; i < num_args; i++)
	{
		int x = va_arg(args, int);
		if (i == 0)
		{
			max = x;
		}
		else if (x > max)
		{
			max = x;
		}
	}
	va_end(args);
	return (max);
}

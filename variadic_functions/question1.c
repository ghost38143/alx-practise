#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int max(int num_args, ...);
void print(char *placeholder, ...);
/**
 * main - call the maximum number
 * Return: o always success
 */
int main(void)
{
	int max_num = max(9, 26, 17, 4, 0, 13, 78, 67, 90, 10);
	printf("max_num: %d\n", max_num);
	print("ddfd", 5, 6, 7.8, 1);
	print("ffdd", 7.2, 8.5, 7, 3);
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

/**
 * print - print a string of charcters
 * @placeholders: the string of acharcters
 * @...: the rst of the arguments
 * Return: 0
 */
void print(char *placeholder, ...)
{
	int length = strlen(placeholder);

	va_list args;
	int i;

	va_start(args, placeholder);

	for (i = 0; i < length; i++)
	{
		if (placeholder[i] == 'd')
		{
			int x = va_arg(args, int);
			printf("%d", x);
			printf("\n");
		}
		else if (placeholder[i] == 'f')
		{
			double x = va_arg(args, double);
			printf("%f", x);
			printf("\n");
		}
	}
	va_end(args);
}

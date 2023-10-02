#include <stdio.h>
/**
 * main - creating an array of strings
 * Return: always 0
 */
int main(void)
{
	char a;

	*a = 's';
	*(a + 1) = 'c';
	*(a + 2) = 'h';
	a[3] = '0';
	a[4] = '0';
	*(a + 5) = 'l';

	printf("%c%c%c%c%c%c \n", a[0], a[1], *(a + 2), *(a + 3), a[4], a[5]);

	return 0;
}

#include "main.h"
/**
 * create_array - create an array and initialize it to a specific charcter
 * @size: the size of the array
 * @c: the character to be assigned
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;
	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(*a) * size);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}


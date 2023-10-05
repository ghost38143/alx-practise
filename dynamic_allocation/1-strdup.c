#include "main.h"
/**
 * _strdup - a function that contains a copy of the string of the given parameter
 * @str: the string to copied
 * Return: string
 */
char *_strdup(char *str)
{
	int a = 0, i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++); /* count the characters until it reaches the null bite*/
	s = malloc((sizeof(char) * i) + 1);/* addition of 1 to accomodate the space for the null byte*/

	if (s == NULL)
	{
		return (NULL);/*to check if the memory allocation was successful*/
	}
	while (a < i)
	{
		s[a] = str[a];/**assigning the the elemnts in the new array*/
		a++;
	}
	s[a] = '\0';

	return (s);
}

		


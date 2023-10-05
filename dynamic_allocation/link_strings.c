#include <stdio.h>
/**
 * main - this function links two strings
 * Return: void
 * this code is still incorect its bringing segmentation core dump
 */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";
	int i, j;

	for (i = 0; str2[i] != '\0'; i++)
		
		for (j = 0; str1[j] != '\0'; j++)
		{
			str2[j + i] = str1[j];
		}
	str2[j + i] = '\0';
	
	printf("the concatenated string is %s\n", str2);

	return (0);
}



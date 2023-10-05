#include <stdio.h>
#include <stdlib.h>
/**
 * m - storing three integers using malloc
 * @n1: int to store and print
 * @n2: int to store and print
 * @n3: int to store and print
 * Return: nothing
 */
int m(int n1, int n2, int n3)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3); /**malloc request memory from the heap*/
	*t = n1;
	*(t + 1) = n2;
	*(t + 2) = n3;

	sum = t[0] + t[1] + t[2];

	printf("%d + %d + %d = %d\n", t[0], t[1], t[2], sum);
	free (t);/**deallocates the memory acquired by malloc*/
}
/**
 * main - introduction to malloc and free
 * Return: value
 */
int main(void)
{
	m(98, 402, -1024);
	return (0);
}

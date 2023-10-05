#include <stdio.h>
#include <stdlib.h>
/**
 * main - using calloc to assign values
 * Return: nothing
 */
int main(void)
{
	int n;
	int i;

	printf("enter the value of your array: ");
	scanf("%d", &n);

	int *A = (int *)calloc(n , sizeof(int));
	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	free (A);
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	return (0);
}

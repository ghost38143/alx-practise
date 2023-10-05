#include <stdlib.h>
#include <stdio.h>
/**
 * main - entering valuesa nd assigning them to malloc
 * Return: nothing
 */
int main()
{
	int n;
	int i;

	printf("please enter your value n for the array: \n");
	scanf("%d", &n);

	int *A = (int *)malloc(n*sizeof(int));//dynamically allocating the array

	for (i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	free (A);
	*(A + 2) = 5;
	for (i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}

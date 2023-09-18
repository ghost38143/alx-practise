#include <stdio.h>
/**
 * modif_my_param - this function does not modify n
 * @m: a useless integer
 * Return: nothing
 */
void modif_my_param(int m)
{
	m = 402;
}
/**
 * main paraemters are passed by value
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 98;
	modif_my_param(n);
	return (0);
}



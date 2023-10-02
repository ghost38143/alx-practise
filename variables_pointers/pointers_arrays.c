#include <stdio.h>
void f(int*a);
/**
 * main - illustrating the array type decay
 * Return: Always 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t; /* this works because of auto implicit conversion of (int *)*/

	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);
	return (0);
}
/**
 * f - print the value of the pointer of type int
 * @a: address of the integer we need to print
 * Return: nothing
 */
void f(int *a)
{
	printf("a: %p\n", a);
	return;
}


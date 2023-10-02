#include <stdio.h>
/**
 * main - ilustrate pointers arithmetic
 * Return: always 0
 */
int main(void)
{
	int t[5];

	*t = 98; /* this is the same as *(t + 0)*/
	*(t + 1) = 198;
	*(t + 2) = 298;
	*(t + 3) = 398;
	*(t + 4) = 498;

	printf("the value of t[0]: %d\n", *t);
	printf("the value of t[1]: %d\n", *(t + 1));
	printf("the value of t[2]: %d\n", *(t + 1));
	printf("the value of t[3]: %d\n", *(t + 1));
	printf("the value of t[4]: %d\n", *(t + 4));
	printf("---------------------\n");
	printf("Value of 't' (also address of t[0]): %p\n", t);
	printf("Address of 't[1]': %p\n", (t + 1));
	printf("Address of 't[1]': %p\n", &(*(t + 1)));
	return (0);
}





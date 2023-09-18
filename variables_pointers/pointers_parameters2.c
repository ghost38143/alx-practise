#include <stdio.h>
/**
 * modif_my_param - setting the ineger to 402
 * @m: apointer the integer we want to set
 * Return: nothing
 */
void modif_my_param(int *m)
{
	printf("the value of 'm' is: %p\n", m);
	printf("the address of 'm' is: %p\n", &m);
	*m = 402;
}
/**
 * main - how to change the value of a variable outside the function using a pointer
 * Return: 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("the value of n before the call: %d\n", n);
	printf("the address of n before the call: %p\n", &n);
	printf("the value of p : %p\n", p);
	printf("the address of p: %p\n", &p);
	modif_my_param(p); //it dereferences the pointer and sets the value to whoch it points to (which is n)
	printf("the value of n after the call: %d\n", n);
	return (0);
}


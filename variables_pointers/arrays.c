#include <stdio.h>
/**
 * main - assessing different elements of an array
 * Return: always 0
 */
int main(void)
{
	int s[5];

	s[0] = 98;
	s[1] = 103;
	s[2] = 85;
	s[3] = 56;
	s[4] = 23;

	printf("the value of s[0] is : %d\n", s[0]);
	printf("the value of s[1] is : %d\n", s[1]);
	printf("the address of s[0] is: %p\n", &(s[0]));
	printf("the address of s[1] is: %p\n", &(s[1]));
	
	return (0);
}	

			

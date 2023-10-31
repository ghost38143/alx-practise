#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main _ this function creates a file and stores it in our local machine
 * Return: 0 indicates successful
 */
int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	if (fp == NULL)
	{
		perror ("Erroe opening the file");
		return 1;
	}
	fprintf (fp, "%s", "Hello Worls");
	fclose (fp);
	return(0);
}

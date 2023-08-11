#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program print alphabrts in lowercase and large case
 * Return: 0
 */
int main(void)
{
	int i = 97;

	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	printf("\n");
	return (0);
}


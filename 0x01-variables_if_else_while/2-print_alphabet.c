#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program print alphaebt from A to Z
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	printf("\n");
	return (0);
}

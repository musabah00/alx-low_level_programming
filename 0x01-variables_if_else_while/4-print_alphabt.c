#include <stdio.h>
/**
 * main - A program print alphabets expect letter e and q
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	printf("\n");
	return (0);
}


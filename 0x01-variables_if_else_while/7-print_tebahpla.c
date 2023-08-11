#include <stdio.h>
/**
 * main - A program that print alphabt in reverse using function putchar
 * Return: 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);

}

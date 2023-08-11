#include <stdio.h>
/**
 * main - A program that print number from 0 to 9 using function putchar
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

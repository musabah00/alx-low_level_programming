#include <stdio.h>
/**
 * main - A program that print number using four putchar
 * Return: 0
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}

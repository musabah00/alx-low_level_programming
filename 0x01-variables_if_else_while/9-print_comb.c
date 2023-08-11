#include <stdio.h>
/**
 * main - A program that print number using four putchar
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while(i <= 57)
	{
		putchar(i);
		if(i == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar(10);
	return (0);
}

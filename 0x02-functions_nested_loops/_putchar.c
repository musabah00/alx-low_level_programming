#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriatelt.
 */
int _putchar(char c)
{
	return int((write(1, &c, 1)));
}

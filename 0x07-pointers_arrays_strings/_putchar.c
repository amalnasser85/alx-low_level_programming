#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character of print
 *
 * Return: On success 1.
 * On error, -1 is return, and error is set appropritely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

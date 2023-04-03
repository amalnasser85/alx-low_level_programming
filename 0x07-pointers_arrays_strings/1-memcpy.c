#include "main.h"

/**
 * _memcpy - funiction copies @n bytes from memory area @scr
 * to memory area @dest
 *
 * @n: function copies
 *
 * @scr: bytes from memory area 
 * 
 * @dest: to memory area
 *
 * Return: na pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = scr[i];
		i++;
	}
	return (dest);
}

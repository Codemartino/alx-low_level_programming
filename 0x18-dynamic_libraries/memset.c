#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: A pointer to a memory area
 * @b: The byte to write to memory
 * @n: The number of bytes to write
 *
 * Martin task
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);
}

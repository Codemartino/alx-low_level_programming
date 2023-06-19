#include "main.h"

/**
 * _memcpy - Copy a memory area
 * @dest: A pointer to the start of the target area
 * @src: A pointer to the start of the source area
 * @n: The number of bytes to copy
 *
 * Description: This function copies n bytes from the memory area at src
 * to the memory area at dest. These memory areas must not overlap.
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pos = dest;

	while (n--)
		*pos++ = *src++;

	return (dest);
}

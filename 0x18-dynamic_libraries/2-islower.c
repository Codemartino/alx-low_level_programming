#include "main.h"

/**
 * _islower - check if character is uppercase
 * @c: character to check
 *
 * This checks for if a character is uppercase
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

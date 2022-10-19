#include "main.h"

/**
 * _islower - lower character check
 *
 * @c: for character
 *
 * Return: 1 for lower or 0 for otherwise
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

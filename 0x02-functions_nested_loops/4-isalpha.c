#include "main.h"

/**
 * _isalpha - checks for letters
 * @c: character check
 *
 * Return: 1 for letter, 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

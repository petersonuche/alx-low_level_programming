#include "main.h"

/**
 * rev_string - string revesal
 * @s: string
 * Return: reverse order
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int i;

	while ([c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}

#include <stdio.h>
/**
 * main - prints lowercase except q and e
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putcar(c);
			c++;
	}
	putchar('\n');
	return (0);
}


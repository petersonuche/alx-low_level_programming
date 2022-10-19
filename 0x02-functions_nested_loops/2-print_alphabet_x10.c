#include "main.h"

/**
 * print_alphabet_x10 - prints etters 10 times
 *
 */
void print_alphabet_x10(void)
{
	int ten;

	char le;

	for (ten = 0; ten <= 9; ten++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
	}
}

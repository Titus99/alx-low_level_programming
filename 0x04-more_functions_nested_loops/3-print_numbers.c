#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @i: character used in the loop
 * folloed by a new line
 * Returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
	_putchar(i);
	}
	_putchar('\n');
}

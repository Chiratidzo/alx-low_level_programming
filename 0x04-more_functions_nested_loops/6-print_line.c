#include "main.h"

/**
 * print_line - Draws a straight line using character _.
 * @n: The number of _ characters to be printed out.
 */

void print_line(void)
{
	int line;

	if (n > 0)
	{
	for (line  = 0; line <= n; line++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}

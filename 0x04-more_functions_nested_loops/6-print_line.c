#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: the number of _ characters to be printed.
 *
 * Return: void is returned because of the data type of the function
*/
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

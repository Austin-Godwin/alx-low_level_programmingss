#include "main.h"

/**
 * times_table - Prints the 9 times tale, starting with 0.
*/
void times_table(void)
{
	int num;
	int numMul;
	int result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (numMul = 1; numMul <= 9; numMul++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * numMul;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

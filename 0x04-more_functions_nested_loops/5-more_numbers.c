#include "main.h"

/**
 * more_numbers - op numbers 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; 1 <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}

}

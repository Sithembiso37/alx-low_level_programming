#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (column == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (column != 9)
					printf(", ");
			}
		}
		printf("/n");
	}
}

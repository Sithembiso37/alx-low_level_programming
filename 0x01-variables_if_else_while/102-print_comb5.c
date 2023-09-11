#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always op 0
 */

int main(void)
{
	int num1, num2, num11, num22, num33, num44;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			num11 = num1 / 10;
			num33 = num1 % 10;
			num22 = num2 / 10;
			num44 = num2 % 10;

			putchar('0' + num11);
			putchar('0' + num33);
			putchar(' ');
			putchar('0' + num22);
			putchar('0' + num44);

			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}

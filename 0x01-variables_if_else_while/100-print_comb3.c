# include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always op 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
	{
		putchar('0' + num1);
		putchar('0' + num2);
		if (num1 < 8 || num2 < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	return (0);
}

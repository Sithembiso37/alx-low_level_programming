#include <stdio.h>

/**
 * main - entry point here
 *
 * Return: always op 0
 */

int main(void)
{
	int sdnum;

	for (sdnum = 0; sdnum < 10; sdnum++)
	{
		putchar('0' + sdnum);
	}

	putchar('\n');

	return (0);

}

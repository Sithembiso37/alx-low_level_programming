#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always op 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);

}

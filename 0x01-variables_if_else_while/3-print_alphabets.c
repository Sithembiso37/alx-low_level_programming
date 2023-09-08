#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always op 0
 */

int main(void)
{
	char alphabetl = 'a';
	char alphabetU = 'A';

	while (alphabetl <= 'z')
	{
		putchar(alphabetl);
		alphabetl++;
	}

	while (alphabetU <= 'Z')
	{
		putchar(alphabetU);
		alphabetU++;
	}

	putchar('\n');

	return (0);

}

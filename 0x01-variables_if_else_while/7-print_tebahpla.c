# include <stdio.h>

/**
 * main - entry point here
 *
 * Return: always op 0
 */

int main(void)
{
	char alphabetl = 'z';

	while (alphabetl >= 'a')
	{
		putchar(alphabetl);
		alphabetl--;
	}

	putchar('\n');

	return (0);

}

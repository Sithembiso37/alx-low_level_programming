#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Return: always op 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

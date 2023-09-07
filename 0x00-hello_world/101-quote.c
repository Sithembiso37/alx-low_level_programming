#include <unistd.h>

/**
 * main - entry point of function
 *
 * Return: this 1 indicates an error
 */

int main(void)
{
	char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);

	return (1);
}

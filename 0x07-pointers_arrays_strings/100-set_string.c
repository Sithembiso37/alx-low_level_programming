#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char (the pointer we want to set)
 * @to: Pointer to char (the value we want to set the pointer to)
 */

void set_string(char **s, char *to)
{
	*s = to;
}

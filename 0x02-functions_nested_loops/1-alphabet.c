#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char boom;

	for (boom = 'a'; boom <= 'z'; boom++)
	{
		_putchar(boom);
	}
	_putchar('\n');
}

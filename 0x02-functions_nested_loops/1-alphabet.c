#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char C = 'a';

	while (C <= 'z')
	{
		_putchar(C);
		C++;
	}

	_putchar('\n');
}

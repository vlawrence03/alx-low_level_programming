#include "main.h"

/**
 * print_alphabet - check the code
 *
 * Return: Always nothing.
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

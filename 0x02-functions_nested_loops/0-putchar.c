#include <stdio.h>

#include "main.h"


/**
<<<<<<< HEAD
 * main - print putchar
=======
 * main - Entry point
>>>>>>> f21d89e9ce4f41f920b248cdcba6ea2dd078794b
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD
	_putchar('_');

	_putchar('p');

	_putchar('u');

	_putchar('t');

	_putchar('c');

	_putchar('h');

	_putchar('a');

	_putchar('r');

	_putchar('\n')

=======
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
>>>>>>> f21d89e9ce4f41f920b248cdcba6ea2dd078794b
}

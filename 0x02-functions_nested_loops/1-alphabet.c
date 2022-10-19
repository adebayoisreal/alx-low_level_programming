#include "main.h"

<<<<<<< HEAD


/**
 *
 *  * print_alphabet - prints alphabet to terminal
 *
 *   *
 *
 *    * Description: Prints the letters of the english alphabet
 *
 *     * in lowercase.
 *
 *      * Return: Void
 *
 *       */



void print_alphabet(void)

{

		char letter = 'a';



			while (letter <= 'z')

					{

								_putchar(letter);

										letter++;

											}

	_putchar('\n');

=======
/**
 * print_alphabet - prints alphabet to terminal
 *
 * Description: Prints the letters of the english alphabet
 * in lowercase.
 * Return: Void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
>>>>>>> f21d89e9ce4f41f920b248cdcba6ea2dd078794b
}

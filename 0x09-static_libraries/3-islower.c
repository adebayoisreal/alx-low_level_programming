#include "main.h"

/**
 * _islower - code
 * @c: code
 * Description: code
 * Return: code
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms

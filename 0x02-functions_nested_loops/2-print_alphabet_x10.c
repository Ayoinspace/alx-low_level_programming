#include "main.h"

/**
 * main - This is the entry point
 *
 * Description - This program uses a _putchar function to print the alpphabet in lower case 10x, followed by a new line
 *
 * return: always return (0) except there is an error, otherwise return 1
 *
 */

void print_alphabet_x10(void);
{
	char c;
	int j;

	for (j = 0; j <=9; j++)
	{
		for (alpha = 'a'; alpha <= 9; alpha++)
			_putchar (alpha);
	}
	_putchar ('\n');
}

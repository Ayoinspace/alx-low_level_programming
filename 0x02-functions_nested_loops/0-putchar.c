#include "main.h"

/**
 * main - Print the word _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *sh = "_putchar";

		while (*sh)
	{
			_putchar(*sh);
			sh++
	}
	_putchar('\n');
	return (0);
}

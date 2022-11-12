#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: string.
* Return: length.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}

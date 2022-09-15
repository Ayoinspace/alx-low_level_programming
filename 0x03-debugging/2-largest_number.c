#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int test;
	int largest;

	if (a > b)
	{
		test = a;
	}
	else
	{
		test = b;
	}
	if (test > c)
	{
		largest = test;
	}
	else
	{
		largest = c;
	}
	return (largest);
}

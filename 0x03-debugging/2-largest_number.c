#include <stdio.h>

/**
 * largest_number - return the largest of numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else if (c >= b && c >= a)
		largest = c;
	return (largest);
}

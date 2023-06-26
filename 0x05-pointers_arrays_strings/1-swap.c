#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two number positions
 * @a: first number
 * @b: number to be swaped with the first one
 */

void swap_int(int *a, int *b);
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}

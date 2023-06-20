#include <unistd.h>
/**
 * _putchar - 
 * Return: Always 0 (Success)
 */
int main(void)
{
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c _putchar.c -o putchar ./putchar

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	
	return (0);
}

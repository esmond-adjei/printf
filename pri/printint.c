#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * printint - prints buffer in he
 * @b: the address of memory t
 * Return: Nothing.
 */
void printint(int *b)
{
	if (*b < 0)
	{
		*b = (*b) * -1;
		_putchar('-');
	}
	if (*b > 0)
	{
		*b = *b / 10;
		printint(b);
	}
	_putchar((*b % 10) + '0');
}

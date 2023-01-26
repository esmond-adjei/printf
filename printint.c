#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * printint - prints buffer in he
 * @b: the address of memory t
 * Return: Nothing.
 */
void printint(int b)
{
	int a;

	if (b == 0)
	{
		return;
	}
	if (b < 0)
	{
		b = b * -1;
		_putchar('-');
	}
	if (b > 0)
	{
		a = b / 10;
		printint(a);
	}
	_putchar((b % 10) + '0');
}

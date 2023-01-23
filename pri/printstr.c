#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * printstr - prints buffer in he
 * @s: the address of memory to print
 *
 * Return: Nothing.
 */
void printstr(char *s)
{
	int a, i;

	a = strlen(s);
	for (i = 0; i <= a; i ++)
	{
		if (i < a)
		{
			_putchar(*(s + i));
		}
	}
}

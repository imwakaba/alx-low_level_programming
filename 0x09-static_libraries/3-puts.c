#include "main.h"
#include <unistd.h>
/**
 *_puts - prints a string, to stdout
 *@: value to be evaluate.
 *Return: not.
 */
void _puts(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		_putchar(s[l]);
		l++;
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character and print 1 or 0
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}


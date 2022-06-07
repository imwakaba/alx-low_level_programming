#include <stdio.h>

/**
* Description print 50 first numbers for Fibnacci 
* starting with 1 and 2
*
* @n: input number.
*
* Return: no return.
*/
void _first_50_numbers(int n)
{
	if (n > 50)
	{
	for (; n > 50; n--)
		{
		printf("%d, ", n);
		}
	}
	else if (n < 50)
	{
		for (; n < 50; n++)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}

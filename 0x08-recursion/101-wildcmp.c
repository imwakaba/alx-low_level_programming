#include "main.h"

/**
 * wildcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2 with wildcards
 *
 * Return: 1 if strings identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
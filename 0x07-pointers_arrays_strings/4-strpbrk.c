#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Searched String
 * @accept: Set of string to be searched
 *
 * Return: If set is matached
 * Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
		int bytes;

		while (*s)
		{
			for (bytes = 0; accept[bytes]; bytes++)
			{
			if (*s == accept[bytes])
			return (s);
			}
		s++;
		}

	return ('\0');
}

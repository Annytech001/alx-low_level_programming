#include "main.h"
/**
 * _strspn - Lenght of the prefix substring
 * @s: Searched string
 * @accept: Measured prefix
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				bytes++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

#include "main.h"
/**
 * _strstr - Locate Substring
 * @haystack: Searched string
 * @needle: Substring to be located
 *
 * Return: If substring is located
 * Null if substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

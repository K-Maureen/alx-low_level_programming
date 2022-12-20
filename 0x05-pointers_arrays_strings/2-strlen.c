#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: String pointer
 *Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}

#include "main.h"
/**
 * _strncpy - C function that copies a string with n
 * @dest: copy to
 * @src: copy from
 * @n: max number of byte copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];

	for ( ; k < n; k++)
		dest[k] = '\0';

	return (dest);
}

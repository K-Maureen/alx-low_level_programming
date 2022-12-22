#include "main.h"
/**
 *_strncat - joins two strings but add inputted number of bytes
 * @dest: string to be copied to
 * @src: string to be copied from
 * @n:integer parameter to compare index to
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int ind = 0, dest_len = 0;

	while (dest[ind++])
		dest_len++;
	for (ind = 0; src[ind] && ind < n; ind++)
		dest[dest_len++] = src[ind];

	return (dest);

}

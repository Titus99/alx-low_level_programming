#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 * Return: the string since the first found accepted character
 */

char *_strpbrk(char *s, char *accept)

{

	int a = 0, b;

	while (s[a])

	{

		b = 0;

		while (accept[b])

		{

			if (s[a] == accept[b])

			{

				s += a;

				return (s);

			}

			b++;

		}

		a++;

	}

	return ('\0');

}

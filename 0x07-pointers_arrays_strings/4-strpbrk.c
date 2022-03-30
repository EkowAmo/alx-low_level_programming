#include "main.h"

/**
 * _strpbrk - searches string for any of a set of bytes 
 * @s: string check
 * @accept: string to check against 
 *
 * Return: pointer to the byte in s that matches the bytes or NULL if no match
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
	    	     if (s[i] == accept[j])
			break;
		}
		if (accept [j])
			return (s + i);
	}
	return (0)
}


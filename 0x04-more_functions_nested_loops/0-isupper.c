#include "main.h"

/**
 * _isupper - checks if character is upper case 
 * c : variable text
 * return: always 0
 */
int _isuppe(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

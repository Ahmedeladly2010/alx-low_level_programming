#include <stdio.h>

/*
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * return : 0
 */
int main(void)
{
	char letter = 'a';

/* start from letter a till we find letter z */

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);

}

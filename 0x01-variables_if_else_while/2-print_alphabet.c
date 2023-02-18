#include <stdio.h>

/** main - Entry point
 * Description: prints the alphabet in lowercase\n
 * return : 0
 */
int main(void)
{
	char letter = 'a';
	while (letter <= 'z'){
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

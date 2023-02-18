#include <stdio.h>

/**
 * main - Entry point
 * printf : prints size of characters
 * return:0
 */
int main(void)
{
	printf("size of a char: %zu bytes(s)\n", sizeof(char));
	printf("size of a int: %zu bytes(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}

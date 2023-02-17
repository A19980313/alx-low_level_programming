#include <stdio.h>

/**
 * main - prints the alphabet in lower case
 * Return: Always 0
 */

int main(void)

{
	char alp[26] - "abcdefghijklmnopqrstuvwxyz";
	int c;

	for (c = 'a'; c <= 'z'; c++);
	{
		putchar(alp[c]);
	}
	putchar("\n");
	return (0);

}

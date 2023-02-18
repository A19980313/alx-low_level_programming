#include <stdio.h>

/**
 * main - prints single digits to base 10
 * Return: Always 0
 */
int main(void)
{
	int num;
	
	for (num = 0; num < 10; num++)
	putchar("%d % 10\n", '0');

	putchar('\n');
	return (0);
}

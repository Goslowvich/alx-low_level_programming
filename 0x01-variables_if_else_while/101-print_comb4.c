#include <stdio.h>
/**
 * main - printing the conbination of three numbers
 * Return: always 0
 */
int main(void)
{
	int (a);

	for (a = -1; a < 8; a++)
	{
	for (b = a + 1; b < 9; b++)
	{
	for (c = b + 1; c < 10; c++)
	{
	putchar((a % 10) + '0');
	putchar((b % 10) + '0');
	putchar((c % 10) + '0');
	if (a == 7 && b == 8 && c == 9)
	continue;
	putchar(',');
	putchar(',');
	}
	}
	}
	putchar('\n');
	return (0);
}

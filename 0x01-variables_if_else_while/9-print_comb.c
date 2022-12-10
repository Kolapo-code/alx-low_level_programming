#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	        int num, number;

	        for (number = 0; number <= 9; number++)
	        {
		putchar(number + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
	        }
	        putchar('\n');

	return (0);
}

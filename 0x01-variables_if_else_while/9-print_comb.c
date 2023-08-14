#include <stdio.h>
/**
* main - entry point of the programm.
* Description: This prints alphabet without 'q', 'e'.
* Return: always return zero.
**/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main- entry point of program here.
* Description: this is a program that print negative pr posative integer
* Return: always return zero.
**/
int main(void)
{
	char i, j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
* main- entry point of program here.
* Description: this is a program that print negative pr posative integer
* Return: always return zero.
**/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

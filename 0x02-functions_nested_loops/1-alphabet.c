#include "main.h"
/**
* main - entry point of programm
* Description: this programm prints '_putchar'
* Return: always return 0
**/
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
#include<unistd.h>
#include<stdio.h>
/**
*main - Entry point of program
*
*Description: code thats print string without printf, puts functions
*
*Return: always return the value of 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

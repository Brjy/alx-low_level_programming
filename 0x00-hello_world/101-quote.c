#include<stdio.h>
#include<unistd.h>
/**
 * main - starting point of program here.
 * Description: ths is a program thats prints without printf,puts.
 * Return: always return value 0f 1.
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
return (1);
}


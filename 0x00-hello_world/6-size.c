#include <stdio.h>
/**
* main - starting point of program
*
* Description:  prints the statement
*
*  Return: 0 alwaays
*/
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a lon long int: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}

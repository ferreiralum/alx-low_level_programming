#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits, separated by commas and spaces,
 * in ascending order, using the putchar function only five times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, m;

for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
{
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}


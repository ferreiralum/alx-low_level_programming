#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 * followed by a new line,
 * excluding the letters 'q' and 'e', using the putchar
 * function twice.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}

putchar('\n');

return (0);
}


#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase, followed by a new line,
 * using the putchar function three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        putchar(i + '0');
    }

    for (i = 0; i < 6; i++)
    {
        putchar(i + 'a');
    }

    putchar('\n');

    return 0;
}


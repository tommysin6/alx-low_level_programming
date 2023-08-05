#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int a = 0;
    time_t t;

    srand((unsigned int)time(&t));

    while (a < 2772)
    {
        int b = rand() % 128;
        if ((a + b) > 2772)
        {
            break;
        }
        a = a + b;
        putchar(b);
    }

    putchar(2772 - a);
    putchar('\n');

    return (0);
}

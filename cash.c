#include <stdio.h>
#include <cs50.h>
#include <math.h>

// q -25c, d -10c, n-5c, p -1c

int main(void)
{

    float change;
    do
    {
        change = get_float("How much change is owned: ");
    }
    while (change < 0);

    int cents = round(change * 100);
    int coins = 0;

    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }
    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }
    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }
    while (cents >= 1 && cents > 0)
    {
        cents = cents - 1;
        coins++;
    }

    printf("%d\n", coins);

    return 0;

}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose? ");

    int mine = 2;

    if (points < mine)
    {
        printf("You lost fewer points than me.\n");

    }
    else if (points > mine)
    {
        printf("You lost more points than me.\n");
    }
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string x = "#";
    int num = get_int("Height: ");

    int i,j;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j < num; j++)
        {
            printf(" ");
        }printf("# ");
    }

}

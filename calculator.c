#include <stdio.h>
#include <cs50.h>

int main(void)
{
    /// prompt user for x
    int x = get_int("x: ");

    /// prompt user for y
    int y = get_int("y: ");

    // Divide x by y
    float z = (float) x / (float) y;

    // Perform addition
    printf("%.2f\n", z);
}
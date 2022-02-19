#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, space, i, j;

    height = get_int("Height: ");


    for (i = 0; i < height; i++)
   {
     for (space = height; space > i; space--)
     {
          printf(" ");
      }
     for (j = 0; j <= i ; j++)
      {
          printf("#");
      }
      printf("  ");

      for (j = 0; j <= i ; j++)
      {
          printf("#");
      }
      printf("\n");
  }
    return 0;
}
#include <stdio.h>
#include <cs50.h>

void print_column(int height);

int main(void)
{
//   for(int i=0; i<=3; i++)
//   {
//     printf("i is %i \n", i);
//     printf("#\n");
//   }
  int height = get_int("Height: ");
  print_column(height);
}

void print_column(int height)
{
  for(int i=0; i<height; i++)
  {
    printf("#\n");
  }
}
